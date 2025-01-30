/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:07:39 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:11:47 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) 
{
    _type = "Cat";
     std::cout << "Cat default constructor created!" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
    std::cout << "Cat constructor of type "<< _type <<" created." <<std::endl; 
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    *this = cat;
    std::cout<< "Copy of Cat of type "<< _type<<" created." << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
    if(this != &cat)
        Animal::operator= (cat);
    std::cout << "Cat assignment operator of type "<< _type <<" created." <<std::endl;  
    return(*this);  
}

Cat::~ Cat()
{
    std::cout << "Cat destructor: Meow, goodbye!" << std::endl;
}

//member functions
// Override makeSound to print "Meow"
void Cat::makeSound() const 
{
    std::cout << "Meow! Meow! Meow! " << std::endl;
}