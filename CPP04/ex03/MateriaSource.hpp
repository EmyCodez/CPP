/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:24:35 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:24:39 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
    AMateria *_materias[4]; 
    int _materiaCount;

  public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator= (const MateriaSource &copy);
    ~MateriaSource();

    //member functions
    void learnMateria(AMateria *m);
    AMateria *createMateria(const std::string &type);
};

# endif