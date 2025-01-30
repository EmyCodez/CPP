/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:35:01 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/27 12:56:20 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{
    _type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor created!" << std::endl;
}

Dog::Dog(const std::string &type, const std::string &idea) : Animal(type)
{
    brain = new Brain(idea);
    std::cout << "Dog constructor of type "<< _type <<" created." <<std::endl; 
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    brain = new Brain(*dog.brain);
    std::cout<< "Copy of Dog of type "<< _type<<" created." << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this != &dog)
    {
         Animal::operator= (dog);
         delete brain;
         brain = new Brain(*dog.brain);
    }
    std::cout << "Dog assignment operator of type "<< _type <<" created." <<std::endl;  
    return(*this);  
}

Dog::~ Dog()
{
    delete brain;
    std::cout << "Dog destructor: Woof, goodbye!" << std::endl;
}

//member functions
// Override makeSound to print "Woof"
void Dog::makeSound() const 
{
    std::cout << "Woof! Woof! Woof! " << std::endl;
}

void Dog::getBrainIdea(int count) const
{
    if(count > 1 && count < 100)
        this->brain->printIdeas(count);
    else
        std::cerr<<"Invalid count!! Please choose from 1-100." << std::endl;    
}