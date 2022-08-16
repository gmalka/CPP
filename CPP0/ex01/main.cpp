#include <string.h>
#include <iostream>
//#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string	command, str;
	std::cout << "Please Enter one of command:" << std::endl << "ADD for Add new Contact" << std::endl << "SEARCH to llok for Contact" << std::endl << "EXIT for out of here" << std::endl; 
	std::cin >> command;
	while (command != "EXIT")
	{
		if (command == "ADD")
			book.addContact(Contact(1));
		else if (command == "SEARCH")
			book.getContact();
		std::cout << "Please Enter one of command:" << std::endl << "ADD for Add new Contact" << std::endl << "SEARCH to llok for Contact" << std::endl << "EXIT for out of here" << std::endl;
		std::cin >> command;
	}
}
