#ifndef INPUT_H
#define INPUT_H

#include <vector>

using namespace std;

class HazardRobinsonCard;
class RobinsonCard;

class Input
{
public:
    static HazardRobinsonCard* chooseCard(HazardRobinsonCard* first,
                                          HazardRobinsonCard* second);
    static bool doContinue();
    static void chooseCardsToDestroy(std::vector<RobinsonCard *> &gameArea);
    static bool wantDestroyCards();
};

#endif // INPUT_H
