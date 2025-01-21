/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:34 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/21 14:07:42 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap s1;
    FragTrap s2("Frog");
    s1.setName("Stomp");
    FragTrap s3 = s2;
    s3.setName("Fox");
    for (int i=0; i < 3; i++)
    {
        s3.highFivesGuys();
        s1.attack("Frog");
        s2.takeDamage(20);
        s1.beRepaired(2);
        s2.attack("Stomp");
        s1.takeDamage(20);
        s3.attack("Stomp");
        s2.highFivesGuys();
        s1.takeDamage(20);
        s2.beRepaired(10);
        s1.highFivesGuys();
    }
    return(0);
}
