/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:45:33 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/15 13:56:41 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
   Fixed const _x;
   Fixed const _y;
   
public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point &point);
    Point &operator=(const Point &point);
    ~Point();

    //member functions
    float getX() const;
    float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif