/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:16:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/11 13:13:14 by esimpson         ###   ########.fr       */
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
    ~Fixed(void);
    Fixed &operator= (const Fixed& fix);
    
    //getter and setter
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    //member functions
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fix);

#endif