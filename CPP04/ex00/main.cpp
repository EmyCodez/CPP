/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:56:03 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/25 17:08:16 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
Dog c1;
//Animal c2 = c1;  
Dog c3 = c1;
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
//std::cout << c2.getType() << " " << std::endl;
std::cout << c3.getType() << " " << std::endl;
// i->makeSound(); 
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete i;
// delete j;
return 0;
}