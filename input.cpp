#include "input.h"

#include <iostream>
#include "hazard_robinson_card.h"
#include "robinson_card.h"


HazardRobinsonCard *Input::chooseCard(HazardRobinsonCard *first,
                                      HazardRobinsonCard *second)
{
    std::string response = "";
    do
    {
        std::cout << "Choose Hazard Card (1 or 2):";
        std::cin >> response;
    } while (response != "1" || response != "2");

    return response == "1" ? first : second;
}

bool Input::doContinue()
{
    bool result = false;
    std::string response = "";
    do
    {
        std::cout << "Continue? (yes or no):";
        std::cin >> response;
    } while (response != "yes" || response != "no");
    return result;
}

void Input::chooseCardsToDestroy(std::vector<RobinsonCard*>& gameArea)
{

}

bool Input::wantDestroyCards()
{
    return true;
}
