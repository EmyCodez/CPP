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