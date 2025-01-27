# pragma once
# ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
    Cure(void);
    Cure(std::string const &type);
    Cure(const Cure &copy);
    Cure &operator= (const Cure &copy);
    ~Cure();

    //member functions
    AMateria* clone() const;
    void use(ICharacter& target);
};

# endif