/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilin <emilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:31:11 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/26 15:30:50 by emilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class  Dog : public Animal
{
  private:
    Brain *brain;
    
  public:
     Dog(void);
     Dog(const std::string &type, const std::string &idea);
     Dog(const Dog &dog);
     Dog &operator= (const Dog &dog);
     ~Dog();
     
    //member functions
    void makeSound() const;
    void getBrainIdea(int count) const;
};

#endif