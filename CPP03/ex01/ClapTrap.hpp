/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:14:07 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/22 13:18:17 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
    
public:
    ClapTrap(void);
    ClapTrap(const std::string &name, unsigned int hitPoints = 10, unsigned int energyPoints = 10, unsigned int attackDamage = 0);
    ClapTrap(const ClapTrap &clap);
    ClapTrap &operator= (const ClapTrap &clap); 
    ~ClapTrap();

    //member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif

