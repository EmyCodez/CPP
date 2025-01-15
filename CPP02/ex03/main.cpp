/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:08:27 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/15 15:44:50 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    {
      Point const a(0, 0);
      Point const b(5, 0);
      Point const c(2, 5);
      Point const pt(2, 2);
    
      bool result = bsp(a,b,c,pt);
      if(result)
        std::cout<<"The point ("<<pt.getX()<<", "<<pt.getY()<<") lies within the triangle."<<std::endl;
      else
        std::cout<<"The point ("<<pt.getX()<<", "<<pt.getY()<<") lies outside the triangle."<<std::endl;
    }

    {
      Point const a(0, 0);
      Point const b(5, 0);
      Point const c(2, 5);
      Point const pt(6, 6);
    
      bool result = bsp(a,b,c,pt);
      if(result)
        std::cout<<"The point ("<<pt.getX()<<", "<<pt.getY()<<") lies within the triangle."<<std::endl;
      else
        std::cout<<"The point ("<<pt.getX()<<", "<<pt.getY()<<") lies outside the triangle."<<std::endl;
    }
     
    return(0);
}