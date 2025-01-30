/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:55:59 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/27 12:56:02 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>


class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    Brain(std::string idea);
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);
    ~Brain();

    //member function
    void printIdeas(int ideaCount) const;
};

#endif