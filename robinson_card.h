#ifndef ROBINSONCARD_H
#define ROBINSONCARD_H

#include "card.h"

class RobinsonCard : public Card
{
public:
    RobinsonCard(const std::string& a_title,
                 int a_fightingValue,
                 SpecialAbility a_ability,
                 int a_lifePointDestroy): Card{a_title},
                                           m_fightingValue{a_fightingValue},
                                           m_ability{a_ability},
                                           m_lifePointDestroy{a_lifePointDestroy}{};
    RobinsonCard(const std::string& a_title,
                 int a_fightingValue,
                 Aging a_aging,
                 AgingAbility a_agingAbility): Card{a_title},
                                               m_fightingValue{a_fightingValue},
                                               m_aging{a_aging},
                                               m_agingAbility{a_agingAbility}{};
    int fightingValue() const;
    void fightingValue(int fightingValue);
protected:
    int m_fightingValue = 0;
    SpecialAbility m_ability = SA_NONE;
    int m_lifePointDestroy = 1;
    Aging m_aging = A_NONE;
    AgingAbility m_agingAbility = AA_NONE;
};

#endif // ROBINSONCARD_H
