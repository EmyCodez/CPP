/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:22:30 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 13:36:36 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
   std::cout << "ScavTrap " << getName() <<  " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav)
{
    std::cout << "ScavTrap " << getName() <<  " copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) 
{
    if(this != &scav)
    {
        ClapTrap::operator=(scav);
    }
    std::cout << "ScavTrap " << getName() <<  " assignment operator called." << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() <<  " destructor called." << std::endl;
}

//member functions

// overiding the attack() function of ClapTrap()
void ScavTrap::attack(const std::string &target)
{
     if(getEnergyPoints() > 0 && getHitPoints() > 0)
       {
          std::cout << "\033[31mScavTrap " << getName() << " attacks " << target;
          std::cout << "." <<std::endl;
       }
     else 
        std::cout << "\033[31mClapTrap " << getName() << "cannot attack !" << std::endl;   
}

void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap " << getName() << " is now in \033[32mgatekeeper\033[0m mode." << std::endl;
}
