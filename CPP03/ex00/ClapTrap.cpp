/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:45:30 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/22 12:35:07 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("Unknown"),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
: _name(name),_hitPoints(hitPoints),_energyPoints(energyPoints),_attackDamage(attackDamage) 
{
     std::cout << "ClapTrap " << name << " constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    std::cout << "ClapTrap assignment operator called."<< std::endl;
    if(this != &clap)
       {
        this->_name = clap._name;
        this->_hitPoints = clap._hitPoints;
        this->_energyPoints = clap._energyPoints;
        this->_attackDamage = clap._attackDamage;
       }     
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name <<  " destructor called." << std::endl;
}

//member functions

void ClapTrap::attack(const std::string &target)
{
    if(this->_energyPoints > 0 && this->_hitPoints > 0)
    {
       std::cout << "\033[31mClapTrap " << _name << " attacks " << target;
       std::cout << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
       this->_energyPoints-- ; 
    }
    else if (this->_energyPoints == 0) 
    {
       std::cout << "\033[31mClapTrap " << _name;
       std::cout << " do not have any energy points left to attack!\033[0m"<< std::endl;   
    }
    else 
    {
       std::cout << "\033[31mClapTrap " << _name;
       std::cout << " do not have any hit points left to attack!\033[0m"<< std::endl;
    }    
               
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoints > amount)
        {
         std::cout << "\033[33mClapTrap " << _name << " takes " << amount ;
         std::cout << " points of damage!\033[0m" <<std::endl; 
         this->_hitPoints -= amount;   
        }
    else 
       {
        this->_hitPoints = 0;
        std::cout<< "\033[33mClapTrap " << _name;
        std::cout<< " have no hit points left to take damage!\033[0m"<< std::endl;
       }    
       
}

void ClapTrap::beRepaired(unsigned int amount)
{   
    if(this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "\033[34mClapTrap " << _name << " repaired ";
        std::cout << amount << " points of damage!\033[0m" <<std::endl; 
        this->_energyPoints--;   
        this->_hitPoints += amount;    
    }
    else if (this->_energyPoints == 0) 
    {
        std::cout << "\033[34mClapTrap " << _name;
        std::cout << " do not have any energy points left to repair!\033[0m"<< std::endl;   
    }
    else 
    {
        std::cout << "\033[34mClapTrap " << _name;
        std::cout << " do not have any hit points left to repair!\033[0m"<< std::endl;
    }    
}
