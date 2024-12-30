/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:57:27 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/30 13:49:56 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    int zombieCount = 9;
    std::string zombieName = "Crackers";
    zombies = zombieHorde(zombieCount,zombieName);
    for(int i = 0; i < zombieCount; ++i)
    {
        std::cout<<i+1<<": ";
        zombies[i].announce();   
    } 
    delete [] zombies;   
    return(0);
}
