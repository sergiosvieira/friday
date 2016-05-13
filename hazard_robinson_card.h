#ifndef HAZARDROBINSONCARD_H
#define HAZARDROBINSONCARD_H

#include "robinson_card.h"
#include "hazard_card.h"

class HazardRobinsonCard
{
public:
    HazardRobinsonCard(RobinsonCard& a_robinsonCard,
                       HazardCard& a_hazardCard);
    RobinsonCard& robinsonCard() const
    {
        return m_robinson;
    }
    HazardCard& hazardCard() const
    {
        return m_hazard;
    }
protected:
    RobinsonCard& m_robinson;
    HazardCard& m_hazard;
};

#endif // HAZARDROBINSONCARD_H
