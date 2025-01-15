/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:41 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/15 15:39:24 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2

static float area( Point const p1, Point const p2, Point const p3)
{
    float area = ( (p1.getX() * (p2.getY()- p3.getY())) +
                    (p2.getX() * (p3.getY()- p1.getY())) +
                    (p3.getX() * (p1.getY()- p2.getY()))
                 ) /2;

    if(area >= 0)
        return(area);
    else
        return( area * -1);                 
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
 
 float a0 = area(a, b, c);
 float a1 = area(point, a, b);
 float a2 = area(point, b, c);
 float a3 = area(point, a, c);

 if( a1 == 0 || a2 == 0 || a3 == 0 )
    return(false);
 float sum = a1 + a2 + a3;
 if(sum == a0)
    return(true); 
 else     
    return(false);
}