#include "Draw.hpp"
#include "Lotto.hpp"

Lotto::Lotto(std::mt19937& randGen)
    : Draw(randGen, 6, 49) {}

Lotto::~Lotto() {}
