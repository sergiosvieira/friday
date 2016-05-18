#ifndef ROBINSONCARD_H
#define ROBINSONCARD_H

#include <ostream>
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
                 int a_lifePointDestroy,
                 Aging a_aging,
                 AgingAbility a_agingAbility): Card{a_title},
                                               m_fightingValue{a_fightingValue},
                                               m_lifePointDestroy{a_lifePointDestroy},
                                               m_aging{a_aging},
                                               m_agingAbility{a_agingAbility}{};
    int fightingValue() const;
    void fightingValue(int fightingValue);
    friend std::ostream& operator<<(std::ostream &os, const RobinsonCard& card)
    {
        return os << "Robinson [\n"
                  //<< "\tTitle: " << card.title()
                  << "\tFighting Value: " << card.fightingValue()
                  << "]\n";
    }

protected:
    int m_fightingValue = 0;
    SpecialAbility m_ability = SpecialAbility::NONE;
    int m_lifePointDestroy = 1;
    Aging m_aging = Aging::NONE;
    AgingAbility m_agingAbility = AgingAbility::NONE;
};

#endif // ROBINSONCARD_H
