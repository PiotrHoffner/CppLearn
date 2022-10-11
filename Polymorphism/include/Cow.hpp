#pragma once

#include "Animal.hpp"

class Cow : public Animal
{
public:
    Cow();
    ~Cow() override final;

    void makeSound(unsigned n) override final;
};
