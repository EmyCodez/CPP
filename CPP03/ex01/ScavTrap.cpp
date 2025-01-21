/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:22:30 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 13:53:03 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
   std::cout << "ScavTrap " << _name <<  " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav)
{
    std::cout << "ScavTrap " << _name <<  " copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) 
{
    if(this != &scav)
    {
        ClapTrap::operator=(scav);
    }
    std::cout << "ScavTrap " << _name <<  " assignment operator called." << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << _name <<  " destructor called." << std::endl;
}

//member functions

// overiding the attack() function of ClapTrap()
void ScavTrap::attack(const std::string &target)
{
     if(_energyPoints > 0 && _hitPoints > 0)
       {
          std::cout << "\033[31mScavTrap " << _name << " attacks " << target;
          std::cout << ".\033[0m" <<std::endl;
       }
     else 
        std::cout << "\033[31mClapTrap " << _name << " cannot attack !\033[0m" << std::endl;   
}

void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap " << getName() << " is now in \033[32mgatekeeper\033[0m mode." << std::endl;
}