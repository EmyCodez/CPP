/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:57:27 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/28 14:27:31 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{

    Zombie *zombiePtr;
    
    zombiePtr = newZombie("New Zombie");
    zombiePtr->announce();
    randomChump("Random Zombie");
    delete zombiePtr;
    return(0);
}
