#ifndef OUTPUT_H
#define OUTPUT_H

#include <vector>

using namespace std;

class HazardRobinsonCard;
class RobinsonCard;

class Output
{
public:
    static void showHazard(HazardRobinsonCard* first,
                           HazardRobinsonCard* second);
    static void showRobinsonCard(RobinsonCard* card);
    static void decrementLife();
    static void destroyCards(std::vector<RobinsonCard*>& gameArea);
};

#endif // OUTPUT_H
