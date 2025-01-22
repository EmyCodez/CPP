/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:35:59 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/22 13:40:39 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s1("Bull");
    ScavTrap s2("Sparrow");
    ScavTrap s3("Fox");
   
    for (int i=0; i < 3; i++)
    {
        s3.guardGate();
        s1.attack("Sparrow");
        s2.takeDamage(20);
        s1.beRepaired(2);
        s2.attack("Fox");
        s3.takeDamage(20);
        s3.attack("Bull");
        s2.guardGate();
        s1.takeDamage(20);
        s2.beRepaired(3);
        s1.guardGate();
    }
    return(0);
}
