/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:56:49 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/28 13:28:16 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout<<this->_name<<" died." <<std::endl;
}

void Zombie::announce(void)
{
    std::cout<<this->_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

