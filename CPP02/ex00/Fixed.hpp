/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:16:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/11 12:42:19 by esimpson         ###   ########.fr       */
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
    Fixed &operator= (const Fixed& fix);
    ~Fixed(void); 
    
    //getter and setter
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif