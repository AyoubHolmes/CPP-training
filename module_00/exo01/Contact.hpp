#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact
{
private:
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

public:
    void displayContact();
    void getContact();
    Contact(std::string f_n, std::string l_n, std::string n_n,
        std::string login, std::string postal, std::string email,
        std::string phone, std::string bday, std::string fav_meal,
        std::string underwear_color, std::string darkest_secret);
    ~Contact();
};


#endif
