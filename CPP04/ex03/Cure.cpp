/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:23:13 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:23:14 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) 
{
    _type = "cure";
}

Cure::Cure(const std::string &type) : AMateria(type) {}

Cure::Cure(const Cure &cure) : AMateria(cure) {}

Cure & Cure::operator= (const Cure &cure)
{
    if(this != &cure)
        AMateria::operator=(cure);
    return(*this);    
}

Cure::~Cure() {}

//member functions
AMateria *Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds * " <<std::endl;
}