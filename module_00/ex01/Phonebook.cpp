#include "Phonebook.hpp"

std::string	ft_check_line(std::string str)
{
	if (!getline(std::cin,str))
		exit(0);
	return(str);
}

Phonebook::Phonebook()
{
    this->counter = 0;
}

void	Phonebook::addContact()
{
	std::string first_name;
    std::string last_name; 
    std::string nickname;
    std::string phone;
    std::string darkest_secret;
	std::cout << "Firstname: ";
	first_name = ft_check_line(first_name);
	std::cout << "Lastname: ";
	last_name = ft_check_line(last_name);
	std::cout << "Nickname: ";
	nickname = ft_check_line(nickname);
	std::cout << "Phone: ";
	phone = ft_check_line(phone);
	std::cout << "Darkest Secret: ";
	darkest_secret = ft_check_line(darkest_secret);
	this->contacts[(this->counter) % 8] = Contact(first_name, last_name, nickname, phone, darkest_secret);
	if (this->counter < 8)
		this->counter++;
}

std::string	get_index(std::string s)
{
	std::string spaces;
	int start;
	int end;

	spaces = " \n\t\r\f\v";
	start = s.find_first_not_of(spaces);
	if (start != -1)
		s = s.substr(start);
	end = s.find_last_not_of(spaces);
	if (end != -1)
		s = s.substr(0, end + 1);
	return (s);
}

int index_checked(std::string s)
{
	size_t i;

	i = 0;
	while (i < s.length())
	{
		if (!std::isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

void	Phonebook::searchContact()
{
	std::string index;

	std::cout  << "\x1B[33m|" << std::setw(10) << "Index";	
	std::cout  << "|" <<  std::setw(10) << "Firstname";
	std::cout  << "|" << std::setw(10) << "Lastname";		
	std::cout  << "|" << std::setw(10) << "Nickname";
	std::cout  << "|" << "\x1B[37m" << std::endl;
	for (int i = 0; i < this->counter; i++)
		this->contacts[i].displayContact(i);
	std::cout << "insert the desired index: ";
	index = get_index(ft_check_line(index));
	if (index != "" && index_checked(index) && std::stoi(index) < this->counter)
		this->contacts[std::stoi(index)].getContact();
	else
		std::cout << "\x1B[31m{ Index is wrong }\x1B[37m" << std::endl;
}

Phonebook::~Phonebook()
{
}