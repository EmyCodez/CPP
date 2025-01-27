# pragma once
# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
  private:
    std::string _name;
    AMateria *_inventory[4];
    
  public:
     Character();
     Character(const std::string &name);
     Character(const Character &copy);
     Character &operator=(const Character &copy);
    ~Character();

    // member functions
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

# endif