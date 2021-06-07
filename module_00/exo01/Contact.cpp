#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_n, std::string l_n, std::string n_n,
        std::string login, std::string postal, std::string email,
        std::string phone, std::string bday, std::string fav_meal,
        std::string underwear_color, std::string darkest_secret)
        : first_name(f_n), last_name(l_n), nickname(n_n), login(login),
        postal(postal), email(email), phone(phone), bday(bday), fav_meal(fav_meal),
        underwear_color(underwear_color),darkest_secret(darkest_secret)
{}

void Contact::displayContact(int index)
{
	std::cout << "\n***************" << std::endl;
	std::cout << "Index: " << index << std::endl;	
	std::cout << "Firstname: " << this->first_name.substr(0, 10) << ((this->first_name.length() > 10) ? "." : "") << std::endl;
	std::cout << "Lastname: " << this->last_name.substr(0, 10) << ((this->first_name.length() > 10) ? "." : "") << std::endl;		
	std::cout << "Nickname: " << this->nickname.substr(0, 10) << ((this->first_name.length() > 10) ? "." : "") << std::endl;		
	std::cout << "***************\n" << std::endl;
}

void Contact::getContact()
{
	std::cout << "\n***************" << std::endl;
	std::cout << "Firstname: " << this->first_name << std::endl;
	std::cout << "Lastname: " << this->last_name << std::endl;		
	std::cout << "Nickname: " << this->nickname << std::endl;		
	std::cout << "Login: " << this->login << std::endl;		
	std::cout << "Postal: " << this->postal << std::endl;		
	std::cout << "Email: " << this->email << std::endl;		
	std::cout << "Phone: " << this->phone << std::endl;		
	std::cout << "Birthday: " << this->bday << std::endl;		
	std::cout << "Favorite Meal: " << this->fav_meal << std::endl;		
	std::cout << "Underwear Color: " << this->underwear_color << std::endl;		
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;		
	std::cout << "***************\n" << std::endl;
}

Contact::~Contact()
{
}