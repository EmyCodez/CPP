/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:55:21 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/28 14:31:54 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie(std::string name);
    ~Zombie();
     
    //member function
    void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif


