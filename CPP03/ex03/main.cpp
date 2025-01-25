/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:11:48 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 13:15:35 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
    DiamondTrap dt("Thunder");
    dt.displayStatus();
    dt.attack("Pirate");
    dt.whoAmI(); 
    dt.displayStatus();
    dt.guardGate();
    dt.highFivesGuys();
    return(0);
}