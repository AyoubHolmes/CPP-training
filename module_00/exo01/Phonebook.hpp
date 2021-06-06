#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

class Phonebook
{
private:
    int         counter;
    Contact contacts[8];
public:
    Phonebook();
    void    addContact();
    void    searchContact();
    void    getContactByIndex();
    ~Phonebook();
};

#endif // !