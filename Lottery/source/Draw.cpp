#include "Draw.hpp"
#include <algorithm>

Draw::Draw(std::mt19937& randGen, uint numberOfDrawNumbers, uint upperDrawLimit)
  : randGen(randGen),
    numberOfDrawNumbers(numberOfDrawNumbers),
    upperDrawLimit(upperDrawLimit)
{}

Draw::~Draw() {}

LotteryDraw Draw::generateDraw()
{
    return generate(numberOfDrawNumbers, upperDrawLimit);
}

LotteryDraw Draw::generate(uint numberOfDrawNumbers, uint upperDrawLimit)
{
    LotteryDraw lotteryDraw(upperDrawLimit);
    std::iota(std::begin(lotteryDraw), std::end(lotteryDraw), 1);
    std::shuffle(std::begin(lotteryDraw), std::end(lotteryDraw), randGen);
    lotteryDraw.resize(numberOfDrawNumbers);
    return lotteryDraw;
}
