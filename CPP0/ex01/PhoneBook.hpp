#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	int		curNumber;
	Contact contact_arr[9];
public:
	PhoneBook();
	void	addContact(Contact);
	void	getContact();
};
