#pragma once
#include "Draw.hpp"

class Lotto : public Draw {
public:
    Lotto(std::mt19937& randGen);
    ~Lotto();
};
