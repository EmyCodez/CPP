/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:54:26 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:21:58 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
    
public:
    Animal(void);
    Animal(const std::string &type);
    Animal(const Animal &copy);
    Animal &operator= (const Animal &copy);
    virtual ~Animal();

    //member functions
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
