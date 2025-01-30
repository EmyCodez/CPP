/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:22:36 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:22:39 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{

    protected:
    std::string _type;

    public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &copy);
    AMateria &operator= (const AMateria &copy);
    virtual ~AMateria();

    //member functions
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;

};

# endif