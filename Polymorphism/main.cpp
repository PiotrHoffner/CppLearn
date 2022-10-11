#include <iostream>
#include <memory>
#include <vector>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Cow.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "Simple C++ polymorphism example!\n\n";

    using Creature = std::unique_ptr<Animal>;

    Creature animal01 = std::make_unique<Cat>();
    Creature animal02 = std::make_unique<Cow>();
    Creature animal03 = std::make_unique<Dog>();

    std::vector<Creature> zoo{};
    zoo.push_back(std::move(animal01));
    zoo.push_back(std::move(animal02));
    zoo.push_back(std::move(animal03));
    std::cout << std::endl;
    
    std::size_t multiplier{0};
    for(const auto& animal : zoo)
    {
        ++multiplier;
        animal->makeSound(multiplier);
    }
    std::cout << std::endl;

    return 0;
}
