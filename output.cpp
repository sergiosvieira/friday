#include "output.h"

#include <cassert>
#include <iostream>
#include "hazard_robinson_card.h"
#include "robinson_card.h"

void Output::showHazard(HazardRobinsonCard *first,
                        HazardRobinsonCard *second)
{
    assert(first != nullptr);
    assert(second != nullptr);
    std::cout << *first;
    std::cout << *second;
}

void Output::showRobinsonCard(RobinsonCard *card)
{
    assert(card != nullptr);
    std::cout << card;
}

void Output::decrementLife()
{

}

void Output::destroyCards(std::vector<RobinsonCard *> &gameArea)
{

}
