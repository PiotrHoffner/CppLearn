#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
    std::cout << "Cat Constructor!\n";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor!\n";
}

void Cat::makeSound(unsigned n)
{
    std::cout << "Cat: ";
    for(std::size_t i = 0; i < n; ++i) 
        std::cout << "Meeeeeeeooow! ";
    std::cout << std::endl;
}
