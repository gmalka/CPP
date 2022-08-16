class Contact
{
private:
	std::string firstName, lastName, nickName, secret, phoneNumber;
public:
	Contact();
	Contact(int);
	Contact(std::string, std::string, std::string, std::string, std::string);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getSecret();
	std::string getPhoneNumber();
	void setFirstName(std::string);
    void setLastName(std::string);
    void setNickName(std::string);
    void setSecret(std::string);
    void setPhoneNumber(std::string);
};
