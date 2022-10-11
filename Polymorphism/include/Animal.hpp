#pragma once

class Animal
{
public:
    Animal();
    virtual ~Animal();

    virtual void makeSound(unsigned x) = 0;
};
