#ifndef FRIDAY_H
#define FRIDAY_H

#include <vector>
#include "robinson_card.h"

class Friday
{
public:
    Friday();
protected:
    static std::vector<RobinsonCard> m_agingCards;
    static std::vector<RobinsonCard> m_startingCards;
};

#endif // FRIDAY_H
