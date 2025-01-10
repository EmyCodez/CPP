/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:22:22 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/10 15:55:01 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_fixedNumValue(0)
{
  std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
    std::cout<<"Copy constructor called"<<std::endl;
    _fixedNumValue = fix.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    if(this != &fix)
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        _fixedNumValue = fix.getRawBits();      
    }
    return(*this);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return(_fixedNumValue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->_fixedNumValue = raw;
}