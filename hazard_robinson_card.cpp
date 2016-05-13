#include "hazard_robinson_card.h"

HazardRobinsonCard::HazardRobinsonCard(RobinsonCard &a_robinsonCard,
                                       HazardCard &a_hazardCard):
                                        m_robinson(a_robinsonCard),
                                        m_hazard(a_hazardCard)
{
}

