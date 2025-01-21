/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:17:52 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/20 15:29:08 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
       
  public:
    ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &scav);
    ScavTrap &operator= (const ScavTrap &scav);
    ~ScavTrap();
    //member functions  
    void guardGate();  
    void attack(const std::string& target);
};
#endif