#include "input.h"

#include "hazard_robinson_card.h"
#include "robinson_card.h"


HazardRobinsonCard *Input::chooseCard(HazardRobinsonCard *first,
                                      HazardRobinsonCard *second)
{
    return first;
}

bool Input::doContinue()
{
    return true;
}

void Input::chooseCardsToDestroy(std::vector<RobinsonCard*>& gameArea)
{

}

bool Input::wantDestroyCards()
{
    return true;
}
