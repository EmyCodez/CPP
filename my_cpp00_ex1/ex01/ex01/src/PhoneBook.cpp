#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _num_of_contacts = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(void)
{
    int index = 0;

    if(_num_of_contacts < 7)
    {
        index = _num_of_contacts;
        _num_of_contacts++;
    }
            
    
        
}