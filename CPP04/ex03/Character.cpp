
#include "Character.hpp"

Character::Character() : _name("")
{
    for(int i=0; i < 4; ++i)
    {
        _inventory[i] = nullptr;
    }
}

Character::Character(std::string const &name) : _name(name)
{
    for(int i=0; i < 4; ++i)
    {
        _inventory[i] = nullptr;
    }
}

Character::Character(const Character &copy) : _name(copy._name)
{
    for(int i=0; i < 4; ++i)
    {
      _inventory[i] = (copy._inventory[i] != nullptr) 
                      ? copy._inventory[i]->clone() : nullptr;
    }
}




Character::~Character() {}