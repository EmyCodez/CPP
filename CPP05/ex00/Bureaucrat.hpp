/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:07:34 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/30 17:01:40 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <cstring>

// Exception classes
class GradeTooHighException : public std::exception 
{
    public:
        const char *what() const throw();
};

class GradeTooLowException : public std::exception 
{
    public:
        const char *what() const throw();
};

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat (const Bureaucrat &other);
    Bureaucrat &operator = (const Bureaucrat &other);
    ~Bureaucrat();
    
    //getters
   const std::string getName() const;
    int getGrade() const;

    //member functions
    void incrementGrade();
    void decrementGrade();
    
};

//overload insertion operator
std::ostream &operator<< (std::ostream &os, const Bureaucrat &other);

# endif