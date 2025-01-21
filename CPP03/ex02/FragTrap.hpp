/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:24 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 12:24:05 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(void);
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &frag);
    FragTrap &operator = (const FragTrap &frag);   
    ~FragTrap();

    //member functions
    void highFivesGuys(void);
};

#endif
