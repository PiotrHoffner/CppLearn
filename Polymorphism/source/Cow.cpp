#include "Cow.hpp"

#include <iostream>

Cow::Cow()
{
    std::cout << "Cow Constructor!\n";
}

Cow::~Cow()
{
    std::cout << "Cow Destructor!\n";
}

void Cow::makeSound(unsigned n)
{
    std::cout << "Cow: ";
    for(std::size_t i = 0; i < n; ++i) 
        std::cout << "Mooo! ";
    std::cout << std::endl;
}
