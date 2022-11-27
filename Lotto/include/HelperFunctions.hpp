#pragma once
#include <vector>
#include <iostream>

namespace HelperFunctions
{
    void printVector(const std::vector<uint>& vector)
    {
        for(const auto& element : vector)
        {
            std::cout << element << '\n';
        }
    }
}
