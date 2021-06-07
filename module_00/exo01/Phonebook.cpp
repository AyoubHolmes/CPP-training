#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->counter = 0;
}

void	Phonebook::addContact()
{
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal;
    std::string email;
    std::string phone;
    std::string bday;
    std::string fav_meal;
    std::string underwear_color;
    std::string darkest_secret;

	if (this->counter == 8)
		std::cout << "CONTACTS LIMIT ACHIEVED!!" << std::endl;
	else
	{
		this->counter++;
		std::cout << "Firstname: ";
		std::cin >> first_name;
		std::cout << "Lastname: ";
		std::cin >> last_name;
		std::cout << "Nickname: ";
		std::cin >> nickname;
		std::cout << "Login: ";
		std::cin >> login;
		std::cout << "Postal: ";
		std::cin >> postal;
		std::cout << "Email: ";
		std::cin >> email;
		std::cout << "Phone: ";
		std::cin >> phone;
		std::cout << "Birthday: ";
		std::cin >> bday;
		std::cout << "Favorate Meal: ";
		std::cin >> fav_meal;
		std::cout << "Underwear Color: ";
		std::cin >> underwear_color;
		std::cout << "Darkest Secret: ";
		std::cin >> darkest_secret;
		this->contacts[this->counter - 1] = Contact(first_name, last_name, nickname, login
					, postal, email, phone, bday, fav_meal, underwear_color, darkest_secret);
	}
}

void	Phonebook::searchContact()
{
	int index;

	for (int i = 0; i < this->counter; i++)
		this->contacts[i].displayContact(i);
	std::cout << "insert the desired index: ";
	std::cin >> index;
	this->contacts[index].getContact();
}

Phonebook::~Phonebook()
{
}