/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:16:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/13 15:20:53 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedNumValue;
    static const int _fractionBits = 8;
    
public:
    Fixed(void);
    Fixed(const int intVal);
    Fixed(const float floatVal);
    Fixed(const Fixed& fix);
    Fixed &operator= (const Fixed& fix);
    ~Fixed(void);
           
    //overloading comparison operators
    bool operator> (const Fixed& fix) const;
    bool operator< (const Fixed& fix) const;
    bool operator>=(const Fixed& fix) const;
    bool operator<=(const Fixed& fix) const;
    bool operator==(const Fixed& fix) const;
    bool operator!=(const Fixed& fix) const;

    //overloading arithmetic operators
    Fixed operator+ (const Fixed &fix)const;
    Fixed operator- (const Fixed &fix)const;
    Fixed operator* (const Fixed &fix)const;
    Fixed operator/ (const Fixed &fix)const;
    
    //Overloading pre-increment/ pre-decrement operators
    Fixed &operator++(void);            
    Fixed &operator--(void);
    //Overloading post-increment/ post-decrement operators
    Fixed operator++(int);            
    Fixed operator--(int);
    
    //getter and setter
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    
    //member functions
    float toFloat( void ) const;
    int toInt( void ) const;
    
    //overloaded member functions
    static Fixed& min(Fixed& nbr1, Fixed& nbr2);
    static const Fixed& min(const Fixed& nbr1, const Fixed& nbr2);
    static Fixed& max(Fixed& nbr1, Fixed& nbr2);
    static const Fixed& max(const Fixed& nbr1, const Fixed& nbr2);
    
};

std::ostream &operator<<(std::ostream &out, Fixed const &fix);

#endif
