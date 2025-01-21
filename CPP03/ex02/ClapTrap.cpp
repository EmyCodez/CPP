/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:45:30 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/20 14:30:57 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("Unknown"),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0) 
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

//getters
std::string ClapTrap::getName(void)
{
    return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void)
{
    return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}

//setters
void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int points)
{
    this->_hitPoints = points;
}

void ClapTrap::setEnergyPoints(unsigned int points)
{
    this->_energyPoints = points;
}

void ClapTrap::setAttackDamage(unsigned int points)
{
    this->_attackDamage = points;
}
