/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:12:09 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 12:52:58 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &diamond);
    DiamondTrap &operator=(const DiamondTrap &diamond);
    ~DiamondTrap();

    // member functions
    void attack(const std::string& target);
    void whoAmI(void);
    void displayStatus(void) const;
};

#endif
