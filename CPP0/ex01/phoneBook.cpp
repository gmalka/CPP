#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	curNumber = 0;
}

void PhoneBook::addContact(Contact newContact)
{
	if (curNumber >= 8)
	{
		for(int i = 0; i < 7; i++)
		{
			contact_arr[i] = contact_arr[i + 1];
		}
		contact_arr[7] = newContact;
	}
	else
	{
		contact_arr[curNumber++] = newContact;
	}
}

void PhoneBook::getContact()
{
	std::string firstName, lastName, nickName, secret, phoneNumber;
	int		g;
	std::cout << std::setw(10) << "ID" << " | " << std::setw(10) << "First Name" << " | " << std::setw(10) << "Last Name" << " | " << std::setw(10) << "Nick Name" << std::endl;
	for(int i = 0; i < curNumber; i++)
	{
		if (contact_arr[i].getFirstName().size() > 10)
			firstName = contact_arr[i].getFirstName().substr(0, 9) + ".";
		else
			firstName = contact_arr[i].getFirstName();
		if (contact_arr[i].getLastName().size() > 10)
            lastName = contact_arr[i].getLastName().substr(0, 9) + ".";
        else
			lastName = contact_arr[i].getLastName();
		if (contact_arr[i].getNickName().size() > 10)
            nickName = contact_arr[i].getNickName().substr(0, 9) + ".";
        else
            nickName = contact_arr[i].getNickName();
		if (contact_arr[i].getSecret().size() > 10)
            secret = contact_arr[i].getSecret().substr(0, 9) + ".";
        else
            secret = contact_arr[i].getSecret();
		if (contact_arr[i].getPhoneNumber().size() > 10)
            phoneNumber = contact_arr[i].getPhoneNumber().substr(0, 9) + ".";
        else
            phoneNumber = contact_arr[i].getPhoneNumber();
		std::cout << std::setw(10) << i + 1 << " | " << std::setw(10) << firstName << " | " << std::setw(10) << lastName << " | " << std::setw(10) << nickName << std::endl;
	}
	std::cin >> g;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "PLEASE ENTER NUMBER !!!" << std::endl;
		std::cin >> g;
	}
	if (g > 0 && g <= curNumber)
	{
		g--;
		std::cout << std::setw(10) << "ID" << " | " << std::setw(10) << "First Name" << " | " << std::setw(10) << "Last Name" << " | " << std::setw(10) << "Nick Name" << " | " << std::setw(10) << "Secret" << " | " << "Phone Number" << std::endl;
		std::cout << std::setw(10) << g + 1 << " | " << std::setw(10) <<  contact_arr[g].getFirstName() << " | " << std::setw(10) << contact_arr[g].getLastName() << " | " << std::setw(10) << contact_arr[g].getNickName() << " | " << std::setw(10) << contact_arr[g].getSecret() << " | " << std::setw(10) << contact_arr[g].getPhoneNumber() << std::endl;
	}
	else
		std::cout << "Smth-g very wrong here" << std::endl;
}
