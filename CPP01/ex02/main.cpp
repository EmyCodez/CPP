/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:57:19 by esimpson          #+#    #+#             */
/*   Updated: 2024/12/30 15:25:40 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAR;
    std::string &stringREF = stringVAR;

    std::cout<<"The memory address of the string variable: "<<&stringVAR<<std::endl;
    std::cout<<"The memory address held by stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF: "<<&stringREF<<std::endl<<std::endl;
    
    std::cout<<"The value of the string variable: "<<stringVAR<<std::endl;
    std::cout<<"The value pointed to by stringPTR: "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF: "<<stringREF<<std::endl;
        
    return (0);
}
