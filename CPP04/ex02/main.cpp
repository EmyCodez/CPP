/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilin <emilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:56:03 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/26 18:35:40 by emilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
    // Animal *a1 = new Animal();
    // a1->makeSound();
    Animal *animals[8];

    for(int i = 0; i < 4 ; ++i)
        animals[i] = new Dog();
    for(int i = 4; i < 8; ++i)
        animals[i] = new Cat();
    for(int i = 0; i < 8; ++i)
         animals[i]->makeSound();
    for(int i = 0; i < 8; ++i)
         delete animals[i];
    // testing for deep copy
    //Dog *d1 = new Dog("Bulldog","I will chase it!");
    //Dog *d2 = new Dog(*d1);
    Cat *d1 = new Cat("Cat","I will chase it!");
    Cat *d2 = new Cat(*d1);
    d1->getBrainIdea(3);
    delete d1;
    std::cout<<"Cloned type: " << d2->getType() <<std::endl;
    std::cout<< "Ideas"<<std::endl;
    d2->getBrainIdea(3);
    delete d2; 
    return 0;
}