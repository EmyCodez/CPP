
# pragma once
# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
    
public:
    WrongAnimal(void);
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator= (const WrongAnimal &copy);
    virtual ~WrongAnimal();

    //member functions
    void makeSound() const;
    std::string getType() const;
};

#endif