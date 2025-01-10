/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:16:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/10 15:33:54 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixedNumValue;
    static const int _fractionBits = 8;
    
public:
    Fixed(void);
    Fixed(const Fixed& fix);
    ~Fixed(void);
    Fixed &operator= (const Fixed& fix);
    
    //getter and setter
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif