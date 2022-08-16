#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::Contact(int i)
{
	char sm;
	if (i == -1)
		return ;
	std::getline(std::cin, this->firstName);
	while (!firstName[0])
	{
		std::cout << "Enter First Name, pelase" << std::endl;
		std::getline(std::cin, this->firstName);
	}
	//std::cin >> this->firstName;
	while (!lastName[0])
	{
		std::cout << "Enter Last Name, pelase" << std::endl;
		std::getline(std::cin, this->lastName);
	}
	//std::cin >> this->lastName;
	while (!nickName[0])
    {
		std::cout << "Enter Nick Name, pelase" << std::endl;
		std::getline(std::cin, this->nickName);
	}
	//std::cin >> this->nickName;
	while (!secret[0])
    {
		std::cout << "Enter Your terrible secret, pelase" << std::endl;
		std::getline(std::cin, this->secret);
	}
	//std::cin >> this->secret;
	while (!phoneNumber[0])
    {
		std::cout << "Enter Phone Number, pelase" << std::endl;
		std::getline(std::cin, this->phoneNumber);
	}
	//std::cin >> this->phoneNumber;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string secret, std::string phoneNumber)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->secret = secret;
	this->phoneNumber = phoneNumber;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

std::string Contact::getNickName()
{
    return this->nickName;
}

std::string Contact::getSecret()
{
    return this->secret;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
