/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:31:44 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/28 16:12:14 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieHorde;
    
    zombieHorde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
        zombieHorde[i].setName(name); 
    
    return(zombieHorde);
}
