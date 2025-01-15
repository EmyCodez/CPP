/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:22:22 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/14 12:05:11 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_fixedNumValue(0){}

Fixed::Fixed(const int intVal)
{
    _fixedNumValue = intVal  << _fractionBits;
}

Fixed::Fixed(const float floatVal)
{
    _fixedNumValue = roundf(floatVal * (1 << _fractionBits));
}

Fixed::Fixed(const Fixed& fix)
{
     *this = fix;
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    if(this != &fix)
         _fixedNumValue = fix._fixedNumValue;      
    return(*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const
{
    return(_fixedNumValue);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedNumValue = raw;
}

float Fixed::toFloat( void ) const
{
     return((float) (_fixedNumValue) / (1 << _fractionBits));    
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

//overloaded comparison operators
bool Fixed::operator> (const Fixed& fix)const
{
    return(this->_fixedNumValue > fix._fixedNumValue);
}

bool Fixed::operator< (const Fixed& fix)const
{
    return(this->_fixedNumValue < fix._fixedNumValue);
}

bool Fixed::operator>= (const Fixed& fix)const
{
    return(this->_fixedNumValue >= fix._fixedNumValue);
}

bool Fixed::operator<= (const Fixed& fix)const
{
    return(this->_fixedNumValue <= fix._fixedNumValue);
}

bool Fixed::operator== (const Fixed& fix)const
{
    return(this->_fixedNumValue == fix._fixedNumValue);
}

bool Fixed::operator!= (const Fixed& fix)const
{
    return(this->_fixedNumValue != fix._fixedNumValue);
}

//overloaded arithmetic operators
Fixed Fixed::operator+ (const Fixed &fix)const
{
    Fixed result;
    result._fixedNumValue = this->_fixedNumValue + fix._fixedNumValue;
    return (result);
}

Fixed Fixed::operator- (const Fixed &fix)const
{
    Fixed result;
    result._fixedNumValue = this->_fixedNumValue - fix._fixedNumValue;
    return (result);
}

Fixed Fixed::operator* (const Fixed &fix)const
{
    Fixed result;
    result._fixedNumValue = this->_fixedNumValue * fix.toFloat();
    return (result);
}

Fixed Fixed::operator/ (const Fixed &fix)const
{
    Fixed result;
    result._fixedNumValue = this->_fixedNumValue / fix.toFloat() ;
    return (result);     
   
}

//overload prefix operators
Fixed &Fixed::operator++(void)
{
    this->_fixedNumValue++;
    return(*this);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedNumValue--;
    return(*this);
}

//overload postfix operators
Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp._fixedNumValue = this->_fixedNumValue++;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp._fixedNumValue= this->_fixedNumValue--;
    return(tmp);
}

//static member functions
Fixed& Fixed::min(Fixed& nbr1, Fixed& nbr2)
{
    return(nbr1 < nbr2) ? nbr1 : nbr2;
}
 
const Fixed& Fixed::min(const Fixed& nbr1, const Fixed& nbr2)
{
    return(nbr1 < nbr2) ? nbr1 : nbr2;
}
 
Fixed& Fixed::max(Fixed& nbr1, Fixed& nbr2)
{
    return(nbr1 > nbr2) ? nbr1 : nbr2;
}

const Fixed& Fixed::max(const Fixed& nbr1, const Fixed& nbr2)
{
    return(nbr1 > nbr2) ? nbr1 : nbr2;
}