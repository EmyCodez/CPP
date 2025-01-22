/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:06:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/22 13:17:13 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Bull");
    ClapTrap b("Jack", 10, 10, 2);
    ClapTrap c = b;
       
    for (int i=0; i < 4; i++)
    {   
        c.attack("Bull");
        a.takeDamage(6);
        a.beRepaired(2);
        b.attack("Fox");
        b.takeDamage(3);
        b.beRepaired(3);
        c.takeDamage(7);
        a.attack("Jack");
        c.beRepaired(2);
    }
    return(0);
}