/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:06:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/18 13:49:58 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Jack");
    ClapTrap c = a;
    c.setName("Fox");
    c.setAttackDamage(4);
    b.setAttackDamage(6);
    a.setAttackDamage(3);
    for (int i=0; i < 4; i++)
    {
        a.attack("Jack");
        b.takeDamage(3);
        a.beRepaired(2);
        a.attack("Fox");
        c.takeDamage(3);
        c.attack("Default");
        a.takeDamage(4);
        c.beRepaired(2);
        b.beRepaired(3);
    }
    return(0);
}