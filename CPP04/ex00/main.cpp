/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilin <emilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:56:03 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/26 10:03:26 by emilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
// Dog c1;
// //Animal c2 = c1;  
// Dog c3 = c1;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
//std::cout << c2.getType() << " " << std::endl;
//std::cout << c3.getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();

    i2->makeSound(); 
    meta2->makeSound();
    
    delete i2;
    delete meta2;

    return 0;
}