# ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
    int _num_of_contacts;
    Contact _contacts[8];
public:
    PhoneBook();
    ~PhoneBook();
    void add(void);
    void search(void);
};

# endif