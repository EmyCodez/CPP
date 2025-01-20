/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:35:59 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/20 15:43:26 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s1;
    ScavTrap s2("Sparrow");
    s1.setName("Bull");
    s1.attack("Sparrow");
    s2.takeDamage(20);
    s1.beRepaired(10);
    s2.guardGate();
    return(0);
}
