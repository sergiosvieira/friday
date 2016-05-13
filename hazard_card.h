#ifndef HAZARDCARD_H
#define HAZARDCARD_H

#include "card.h"

class HazardCard: public Card
{
public:
    HazardCard(const std::string& a_title,
               int a_freeCards,
               int a_greenHazard,
               int a_yellowHazard,
               int a_redHazard);
    int freeCards() const;
    int greenHazard() const;
    int yellowHazard() const;
    int redHazard() const;
protected:
    int m_freeCards = 1;
    int m_greenHazard = 0;
    int m_yellowHazard = 1;
    int m_redHazard = 3;
};

#endif // HAZARDCARD_H
