/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:41:39 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:13:07 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
    
public:
    WrongAnimal(void);
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator= (const WrongAnimal &copy);
    virtual ~WrongAnimal();

    //member functions
    void makeSound() const;
    std::string getType() const;
};

#endif