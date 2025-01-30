/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:24:27 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 12:24:32 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource() :_materiaCount(0)
{
    for(int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) :_materiaCount(copy._materiaCount)
{
     for(int i = 0; i < 4; i++)
        _materias[i] = NULL;
     for(int i = 0; i < 4; i++)
     {
        if(copy._materias[i])
            _materias[i] = copy._materias[i]->clone();   
     }
        
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
       _materiaCount = copy._materiaCount;
       for (int i = 0; i < 4; ++i) 
       {
         if (_materias[i])
                delete _materias[i];
        }        
       for(int i=0; i < 4; ++i)
       {
        _materias[i] = (copy._materias[i] != NULL ) ? copy._materias[i]->clone() 
                        : NULL ;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i) 
    {
       if (_materias[i])
            delete _materias[i];
    }  
}

// member functions
void MateriaSource::learnMateria(AMateria *materia)
{
    if (_materiaCount < 4 && materia)
    {
        _materias[_materiaCount] = materia->clone();
        _materiaCount++;
    }
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
     for (int i = 0; i < _materiaCount; ++i)
      {
        if (_materias[i]  && _materias[i]->getType() == type) 
        {
            return _materias[i]->clone();
        }
       }
        return (NULL);
    }
