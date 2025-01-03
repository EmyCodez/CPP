/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:39:35 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/03 12:40:48 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " grabbed " << this->_weapon->getType() << "!" << std::endl;
}

void HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << "." << std::endl;
	else
		std::cout << this->_name << " attacks with bare hands." << std::endl;
}