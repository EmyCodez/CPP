/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:07:39 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/27 12:56:11 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() 
{
    _type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor created!" << std::endl;
}

Cat::Cat(const std::string &type, const std::string &idea) : Animal(type)
{
    std::cout << "Cat constructor of type "<< _type <<" created." <<std::endl; 
    brain = new Brain(idea);
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    brain = new Brain(*cat.brain);
    std::cout<< "Copy of Cat of type "<< _type<<" created." << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
    if(this != &cat)
    {
        delete brain;
        Animal::operator=(cat);
        brain = new Brain(*cat.brain);
    }
    std::cout << "Cat assignment operator of type "<< _type <<" created." <<std::endl;  
    return(*this);  
}

Cat::~ Cat()
{
    delete brain;
    std::cout << "Cat destructor: Meow, goodbye!" << std::endl;
}

//member functions
// Override makeSound to print "Meow"
void Cat::makeSound() const 
{
    std::cout << "Meow! Meow! Meow! " << std::endl;
}

void Cat::getBrainIdea(int count) const
{
    if(count > 1 && count < 100)
        this->brain->printIdeas(count);
    else
        std::cerr<<"Invalid count!! Please choose from 1-100." << std::endl;    
}