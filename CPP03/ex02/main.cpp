/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:34 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 13:25:33 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap s1("Stomp");
    FragTrap s2("Frog");
    FragTrap s3("Fox");
     
    for (int i=0; i < 2; i++)
    {
        s3.highFivesGuys();
        s1.attack("Frog");
        s2.takeDamage(20);
        s1.beRepaired(2);
        s2.attack("Fox");
        s3.takeDamage(20);
        s3.attack("Stomp");
        s2.highFivesGuys();
        s1.takeDamage(20);
        s2.beRepaired(10);
        s1.highFivesGuys();
    }
    return(0);
}
