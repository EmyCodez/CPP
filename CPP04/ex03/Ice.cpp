
#include "Ice.hpp"

Ice::Ice(void) 
{
    _type = "ice";
}

Ice::Ice(const std::string &type) : AMateria(type) {}

Ice::Ice(const Ice &ice) : AMateria(ice) {}

Ice & Ice::operator= (const Ice &ice)
{
    if(this != &ice)
        AMateria::operator=(ice);
    return(*this);    
}

Ice::~Ice() {}

//member functions
AMateria *Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " * " <<std::endl;
}
