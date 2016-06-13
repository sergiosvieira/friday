#ifndef HAZARDROBINSONCARD_H
#define HAZARDROBINSONCARD_H

#include <iostream>
#include <ostream>
#include <utility>
#include <algorithm>
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
    friend std::ostream & operator<<(std::ostream &os, const HazardRobinsonCard& card)
    {
        return os << "Hazard\n["
                  << "\n\tTitle:" << card.hazardCard().title()
                  << "\n\tFree Cards:" << card.hazardCard().freeCards()
                  << "\n\tGreen Hazard:" << card.hazardCard().greenHazard()
                  << "\n\tYellow Hazard:" << card.hazardCard().yellowHazard()
                  << "\n\tRed Hazard:" << card.hazardCard().redHazard()
                  << "\n]";
    }
    HazardRobinsonCard& operator=(const HazardRobinsonCard& other)
    {
        m_robinson = other.robinsonCard();
        m_hazard = other.hazardCard();
        return *this;
    }

protected:
    RobinsonCard& m_robinson;
    HazardCard& m_hazard;
};

#endif // HAZARDROBINSONCARD_H
