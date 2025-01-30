/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:55:33 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/27 14:11:32 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout<< "Default Animal created." << std::endl;
    _type = "Default";
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "Animal constructor of type : " << _type <<"  is created."<< std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout<< "Copy of Animal of type "<< _type<<" created." << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    if(this != &copy)
        this->_type = copy._type;
    std::cout<< "Assignment operator of Animal type " <<_type<<" called." << std::endl;
    return(*this);
}

Animal::~Animal() 
{
    std::cout << "Animal destructor of type: " << _type <<" called."<< std::endl;
}

//member functions
std::string Animal::getType() const
{
    return(_type);
}