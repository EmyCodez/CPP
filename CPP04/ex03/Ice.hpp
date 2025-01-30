/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:23:37 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:23:40 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
    Ice(void);
    Ice(std::string const &type);
    Ice(const Ice &copy);
    Ice &operator= (const Ice &copy);
    ~Ice();

    //member functions
    AMateria* clone() const;
    void use(ICharacter& target);
};

# endif