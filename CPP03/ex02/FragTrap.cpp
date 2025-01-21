/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:03:13 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 13:34:07 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() <<  " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag)
{
   std::cout << "FragTrap " << getName() <<  " copy constructor called." << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
    if(this != &frag)
        ClapTrap::operator=(frag);
    std::cout << "FragTrap " << getName() <<  " assignment operator called." << std::endl;    
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() <<  " destructor called." << std::endl;
}

//member functions
void FragTrap::highFivesGuys(void)
{
    std::cout <<  "FragTrap " << getName() <<  " requests a \033[33mhigh five!\033[0m" << std::endl;
}
