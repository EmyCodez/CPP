/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:20:58 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 13:15:09 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{
    _name = "Default";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout<< "Diamond Trap default constructor called."<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond): ClapTrap(diamond), FragTrap(diamond), ScavTrap(diamond), _name(diamond._name)
{
    std::cout<< "DiamondTrap" << _name << " copy constructor called." << std::endl;
}


DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout<< "Diamond Trap "<< this->_name << " constructor called."<<std::endl;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond)
{
    if(this != &diamond)
      ClapTrap::operator=(diamond);
    std::cout << "DiamondTrap " << _name <<  " assignment operator called." << std::endl;    
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<< "Diamond Trap "<< _name << " destructor called." <<std::endl; 
}

//member functions
void DiamondTrap::attack(const std::string &target)
{
   ScavTrap::attack(target);      
}

void DiamondTrap::whoAmI(void)
{
    std::cout<<"I am "<<_name << " DiamondTrap. My ClapTrap name is ";
	std::cout<<ClapTrap::_name << "." <<std::endl;
}

void DiamondTrap::displayStatus(void) const
{
   std::cout<<"DiamondTrap name: "<< _name << std::endl;
   std::cout<<"Hit points = "<< this->_hitPoints << std::endl;
   std::cout<<"Energy Points = " << this->_energyPoints << std::endl;
   std::cout<<"Attack Damage = " << this->_attackDamage <<std::endl;
}