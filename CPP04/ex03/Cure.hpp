/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:23:22 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:23:24 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
    Cure(void);
    Cure(std::string const &type);
    Cure(const Cure &copy);
    Cure &operator= (const Cure &copy);
    ~Cure();

    //member functions
    AMateria* clone() const;
    void use(ICharacter& target);
};

# endif