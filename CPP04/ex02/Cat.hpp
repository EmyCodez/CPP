/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilin <emilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:05:27 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/26 15:39:08 by emilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class  Cat : public Animal
{
    private:
        Brain *brain;

    public:
      Cat(void);
      Cat(const std::string &type, const std::string &idea);
      Cat(const Cat &cat);
      Cat &operator= (const Cat &cat);
      ~Cat();
     
    //member functions
    void makeSound() const;
    void getBrainIdea(int count) const;
};

#endif