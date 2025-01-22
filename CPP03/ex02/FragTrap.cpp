/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:03:13 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/22 15:52:52 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name <<  " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag)
{
   std::cout << "FragTrap " << _name <<  " copy constructor called." << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
    if(this != &frag)
        ClapTrap::operator=(frag);
    std::cout << "FragTrap " << _name <<  " assignment operator called." << std::endl;    
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name <<  " destructor called." << std::endl;
}

//member functions
void FragTrap::highFivesGuys(void)
{
    std::cout <<  "FragTrap " << _name <<  " requests a \033[33mhigh five!\033[0m" << std::endl;
}
