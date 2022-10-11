#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog() override final;

    void makeSound(unsigned n) override final;
};
