#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat() override;

    void makeSound(unsigned n) override;
};
