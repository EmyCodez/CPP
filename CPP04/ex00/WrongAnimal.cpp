#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout<< "Default WrongAnimal created." << std::endl;
    _type = "Default";
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
    std::cout << "WrongAnimal constructor of type : " << _type <<"  is created."<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout<< "Copy of WrongAnimal of type "<< _type<<" created." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    if(this != &copy)
        this->_type = copy._type;
    std::cout<< "Assignment operator of WrongAnimal type " <<_type<<" called." << std::endl;
    return(*this);
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor of type: " << _type <<" called."<< std::endl;
}

//member functions
void WrongAnimal::makeSound() const 
{
    std::cout<< "Make some WrongAnimal noise !!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);
}