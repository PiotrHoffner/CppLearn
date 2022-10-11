#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    std::cout << "Dog Constructor!\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor!\n";
}

void Dog::makeSound(unsigned n)
{
    std::cout << "Dog: ";
    for(std::size_t i = 0; i < n; ++i) 
        std::cout << "Bark! ";
    std::cout << std::endl;
}
