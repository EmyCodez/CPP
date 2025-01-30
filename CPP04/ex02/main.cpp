/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:56:03 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/27 14:15:14 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// Animal *a1 = new Animal(); -- to test abstract class
// a1->makeSound();

int main()
{
    Animal *animals[8];

    for(int i = 0; i < 4 ; ++i)
        animals[i] = new Dog();
    for(int i = 4; i < 8; ++i)
        animals[i] = new Cat();
    for(int i = 0; i < 8; ++i)
         animals[i]->makeSound();
    for(int i = 0; i < 8; ++i)
         delete animals[i];
    
    Cat *d1 = new Cat("Cat","I will chase it!");
    Cat *d2 = new Cat(*d1);
    d1->getBrainIdea(2);
    delete d1;
    std::cout<<"Cloned type: " << d2->getType() <<std::endl;
    std::cout<< "Ideas"<<std::endl;
    d2->getBrainIdea(2);
    delete d2; 
    return 0;
}