#include "WrongCat.hpp"

WrongCat::WrongCat(void)  
{
    _type = "WrongCat";
    std::cout << "WrongCat default constructor created!" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    std::cout << "WrongCat constructor of type "<< _type <<" created." <<std::endl; 
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{
    *this = WrongCat;
    std::cout<< "Copy of WrongCat of type "<< _type<<" created." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat)
{
    if(this != &WrongCat)
        WrongAnimal::operator= (WrongCat);
    std::cout << "WrongCat assignment operator of type "<< _type <<" created." <<std::endl;  
    return(*this);  
}

WrongCat::~ WrongCat()
{
    std::cout << "WrongCat destructor: Goodbye!" << std::endl;
}

//member functions
// Override makeSound to print "Meow"
void WrongCat::makeSound() const 
{
    std::cout << "WrongCat Meow! Meow! Meow! " << std::endl;
}