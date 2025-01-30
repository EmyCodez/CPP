/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:42:01 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:13:22 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{

public:
     WrongCat(void);
     WrongCat(const std::string &type);
     WrongCat(const WrongCat &wcat);
     WrongCat &operator= (const WrongCat &wcat);
     ~WrongCat();
     
    //member functions
    void makeSound() const;
};

#endif