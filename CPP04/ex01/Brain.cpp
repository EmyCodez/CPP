
#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default Brain constructor called." <<std::endl;
    for(int i = 0; i < 100 ; ++i)
            ideas[i] = "Idea";
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain constructor called." <<std::endl;
    for(int i = 0; i < 100 ; ++i)
            ideas[i] = idea;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called." << std::endl;
    for(int i = 0; i < 100; ++i)
            ideas[i] = brain.ideas[i];
}

Brain& Brain::operator= (const Brain &brain)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if( this != &brain)
    {
      for(int i = 0; i < 100; ++i)
          ideas[i] = brain.ideas[i];
    }
    return (*this);

}

Brain::~Brain()
{
    std::cout << "Brain destructed." <<std::endl;
}

void Brain::printIdeas(int ideaCount) const
{
    for(int i = 0; i < ideaCount; ++i)
        std::cout << ideas[i] << std::endl;
}