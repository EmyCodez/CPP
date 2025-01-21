/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:34 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 12:43:19 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap s1;
    FragTrap s2("Frog");
    s1.setName("Stomp");
    s1.attack("Frog");
    s2.takeDamage(40);
    s1.beRepaired(15);
    s2.highFivesGuys();
    return(0);
}
