/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:17:00 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/30 17:03:29 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include <exception>
#include <iostream>

int main(void)
{

    try {
        Bureaucrat b1("Alice", 19);
        Bureaucrat b2;
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
       // Test increment and decrement
        b1.decrementGrade();
        b1.incrementGrade();
       // Test invalid grade increment
        b1.incrementGrade(); 
        b2.decrementGrade();
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
