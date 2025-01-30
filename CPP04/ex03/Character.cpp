/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:22:51 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:22:54 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
    for(int i=0; i < 4; ++i)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(std::string const &name) : _name(name)
{
    for(int i=0; i < 4; ++i)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(const Character &copy) : _name(copy._name)
{
    for(int i=0; i < 4; ++i)
    {
      _inventory[i] = (copy._inventory[i] != NULL) 
                      ? copy._inventory[i]->clone() : NULL;
    }
}

Character & Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
       _name = copy._name;
       for (int i = 0; i < 4; ++i) 
       {
         if (_inventory[i])
                delete _inventory[i];
        }        
       for(int i=0; i < 4; ++i)
       {
        _inventory[i] = (copy._inventory[i] != NULL ) ? copy._inventory[i]->clone() 
                        : NULL ;
        }
    }
    return (*this);
}

Character::~Character()
{
    for(int i=0; i < 4; ++i)
    {
        delete _inventory[i];
    }
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *mat)
{
    for(int i = 0; i < 4; i++ )
    {
        if(_inventory[i] == NULL)
        {
            _inventory[i] = mat->clone();
            return;
        }
    }
    std::cout<< "Inventory is full! Cannot equip "<< mat->getType() <<std::endl;
}

void Character::unequip(int idx) //removes Materia, does not delete
{
    if(idx < 0 || idx > 3 || _inventory[idx] == NULL)
    {
        std::cout << "Invalid slot or no Materia in this slot." <<std::endl;
        return;
    }
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
     if(idx < 0 || idx > 3 || _inventory[idx] == NULL)
    {
        std::cout << "Invalid slot or no Materia in this slot." <<std::endl;
        return;
    }
    _inventory[idx]->use(target);

}
