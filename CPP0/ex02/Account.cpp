#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = Account::_nbAccounts++;
    _nbDeposits = 0;
	_amount = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm *ltm = std::localtime(&t);
	char	buffer[80];
	strftime (buffer, 80, "[%Y%m%d_%H%M%S]  ",ltm);
	std::cout << buffer;	
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	oldAmount = _amount - withdrawal;
	if (oldAmount > 0)
	{
		Account::_totalNbWithdrawals++;
        Account::_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << oldAmount << ";nb_withdrawal:" <<  _nbWithdrawals << std::endl;
		_amount = oldAmount;
		_totalAmount -= withdrawal;
		return true;
	}
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	return false;
}
