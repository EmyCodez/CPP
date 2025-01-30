/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:22:43 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:22:46 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria & AMateria::operator=  (const AMateria &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);    
}

AMateria::~AMateria() {}

//member functions
const std::string &AMateria::getType() const
{
    return (_type);
}
