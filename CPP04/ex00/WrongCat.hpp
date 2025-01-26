
# pragma once
# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{

public:
     WrongCat(void);
     WrongCat(const std::string &type);
     WrongCat(const WrongCat &wcat);
     WrongCat &operator= (const WrongCat &wcat);
     ~WrongCat();
     
    //member functions
    void makeSound() const;
};

#endif