/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:19:51 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/30 17:01:50 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

// Implementing Exception classes
const char * GradeTooHighException::what() const throw() 
{
    return "Grade is too High!";
}

const char * GradeTooLowException::what() const throw() 
{
    return "Grade is too Low!";
}

//Constructors for Bureaucrat class
Bureaucrat::Bureaucrat() : _name("Default") ,_grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name.empty() ? "Default" : name)  
{
    if(grade < 1)
    {
       throw GradeTooHighException();    
    }
    else if(grade > 150)
    {
      throw GradeTooLowException();   
    }
    this->_grade = grade;   
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) , _grade(other._grade) {}
  

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &other)
{
    if(this != &other)
            this->_grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

//getters
const std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

//member fuctions
void Bureaucrat::incrementGrade()
{
    if(_grade <= 1)
        throw GradeTooHighException();
    _grade--;   
}

void Bureaucrat::decrementGrade()
{
    if(_grade >= 150)
        throw GradeTooLowException();
     _grade--;   
}

//overload insertion operator
std::ostream &operator<< (std::ostream &os ,const Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade() <<".";
    return(os);
}
