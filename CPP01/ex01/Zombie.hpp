/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:55:21 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/28 16:09:00 by esimpson         ###   ########.fr       */
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
    Zombie();
    Zombie(std::string name);
    ~Zombie();
     
    //setter
    void setName(std::string name);
    
    //member function
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif


