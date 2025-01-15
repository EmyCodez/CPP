/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:56:22 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/15 14:06:05 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):_x(0),_y(0){}

Point::Point(const float x, const float y):_x(x),_y(y) {}

Point::Point(const Point &point):_x(point._x),_y(point._y) {}

Point &Point::operator=(const Point &point)
{
    if(this != &point)
         *this = point;
    return(*this);
}

Point::~Point(){}

float Point::getX() const
{
    return(this->_x.toFloat());
}

float Point::getY() const
{
    return(this->_y.toFloat());
}