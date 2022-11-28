#pragma once

#include <random>
#include <vector>

using LotteryDraw = std::vector<uint>;
using LotteryDraws = std::vector<LotteryDraw>; 

class Draw{
public:
    Draw(std::mt19937& randGen, uint numberOfDrawNumbers, uint upperDrawLimit);
    ~Draw();
    LotteryDraw generateDraw();

private:
    LotteryDraw generate(uint numberOfDrawNumbers, uint upperDrawLimit);
    std::mt19937& randGen;
    const uint numberOfDrawNumbers;
    const uint upperDrawLimit;
};
