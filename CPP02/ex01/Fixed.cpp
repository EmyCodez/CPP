/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:22:22 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/11 14:30:58 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_fixedNumValue(0)
{
  std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int intVal)
{
     std::cout<<"Int constructor called"<<std::endl;
     _fixedNumValue = intVal  << _fractionBits;
}

Fixed::Fixed(const float floatVal)
{
     std::cout<<"Float constructor called"<<std::endl;
     _fixedNumValue = roundf(floatVal * (1 << _fractionBits));
}

Fixed::Fixed(const Fixed& fix)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = fix;
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if(this != &fix)
         _fixedNumValue = fix._fixedNumValue;      
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

float Fixed::toFloat( void ) const
{
    float floatNbr;
    floatNbr = (float) (_fixedNumValue) / (1 << _fractionBits);    
    return(floatNbr);
}
 
int Fixed::toInt( void ) const
{
    return ( _fixedNumValue >> _fractionBits);
}

//overloading insertion operator
std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
    out << fix.toFloat();
    return(out);
}