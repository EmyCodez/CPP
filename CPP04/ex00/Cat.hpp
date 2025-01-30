/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:05:27 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:12:37 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class  Cat : public Animal
{

public:
     Cat(void);
     Cat(const std::string &type);
     Cat(const Cat &cat);
     Cat &operator= (const Cat &cat);
     ~Cat();
     
    //member functions
    void makeSound() const;
};

#endif