#include <iostream>
#include <random>
#include "HelperFunctions.hpp"
#include "Draw.hpp"
#include "Lotto.hpp"


int main()
{
    std::random_device  randomDevice;
    std::mt19937 gen32(randomDevice());

    Lotto lotto(gen32);
    HelperFunctions::printVector(lotto.generateDraw());

    return 0;
}
