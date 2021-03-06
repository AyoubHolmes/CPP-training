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
    std::string phone;
    std::string darkest_secret;

public:
    void displayContact(int index);
    void getContact();
    Contact();
    Contact(std::string f_n, std::string l_n, std::string n_n,
        std::string phone, std::string darkest_secret);
    ~Contact();
};


#endif
