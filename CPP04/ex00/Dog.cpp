/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:35:01 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 17:09:53 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() 
{
    _type = "Dog";
    std::cout << "Dog constructor created!" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
    std::cout << "Dog constructor of type "<< _type <<" created." <<std::endl; 
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    *this = dog;
    std::cout<< "Copy of Dog of type "<< _type<<" created." << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this != &dog)
        Animal::operator= (dog);
    std::cout << "Dog assignment operator of type "<< _type <<" created." <<std::endl;  
    return(*this);  
}

Dog::~ Dog()
{
    std::cout << "Dog destructor: Woof, goodbye!" << std::endl;
}

//member functions
// Override makeSound to print "Woof"
void Dog::makeSound() const 
{
    std::cout << "Woof! Woof! Woof! " << std::endl;
}