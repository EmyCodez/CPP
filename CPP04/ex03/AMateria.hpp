# pragma once
# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{

    protected:
    std::string _type;

    public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &copy);
    AMateria &operator= (const AMateria &copy);
    virtual ~AMateria();

    //member functions
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;

};

# endif