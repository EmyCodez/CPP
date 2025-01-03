/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:10:03 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/03 12:40:23 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << "." << std::endl;
}