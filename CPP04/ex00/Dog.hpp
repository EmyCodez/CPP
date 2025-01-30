/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:31:11 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:12:22 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class  Dog : public Animal
{

public:
     Dog(void);
     Dog(const std::string &type);
     Dog(const Dog &dog);
     Dog &operator= (const Dog &dog);
     ~Dog();
     
    //member functions
    void makeSound() const;
};

#endif