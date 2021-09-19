#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_n, std::string l_n, std::string n_n,
        std::string phone, std::string darkest_secret)
        : first_name(f_n), last_name(l_n), nickname(n_n)
		, phone(phone), darkest_secret(darkest_secret)
{}

void Contact::displayContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << ((this->first_name.length() > 10) ? this->first_name.substr(0, 9) + "." : this->first_name);	
	std::cout  << "|" << std::setw(10) << ((this->last_name.length() > 10) ? this->last_name.substr(0, 9) + "." : this->last_name);
	std::cout  << "|" << std::setw(10) << ((this->nickname.length() > 10) ? this->nickname.substr(0, 9) + "." : this->nickname)  <<  "|" << std::endl;
}

void Contact::getContact()
{
	std::cout << "\n***************" << std::endl;
	std::cout << "Firstname: " << this->first_name << std::endl;
	std::cout << "Lastname: " << this->last_name << std::endl;		
	std::cout << "Nickname: " << this->nickname << std::endl;		
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;		
	std::cout << "***************\n" << std::endl;
}

Contact::~Contact()
{
}