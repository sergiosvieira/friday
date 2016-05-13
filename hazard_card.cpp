#include "hazard_card.h"


HazardCard::HazardCard(const std::string &a_title,
                       int a_freeCards,
                       int a_greenHazard,
                       int a_yellowHazard,
                       int a_redHazard):
                        Card(a_title),
                        m_freeCards(a_freeCards),
                        m_greenHazard(a_greenHazard),
                        m_yellowHazard(a_yellowHazard),
                        m_redHazard(a_redHazard)
{
}

int HazardCard::freeCards() const
{
    return m_freeCards;
}

int HazardCard::greenHazard() const
{
    return m_greenHazard;
}

int HazardCard::yellowHazard() const
{
    return m_yellowHazard;
}

int HazardCard::redHazard() const
{
    return m_redHazard;
}
