#ifndef CARD_H
#define CARD_H

#include <string>

using SpecialAbility = enum
{
    SA_NONE,
    PLUS_ONE_LIFE,
    PLUS_TWO_LIFE,
    PLUS_ONE_CARD,
    PLUS_TWO_CARDS,
    ONE_DESTROY,
    ONE_DOUBLE,
    ONE_COPY,
    STEP_MINUS_ONE,
    SORT_THREE_CARDS,
    ONE_EXCHANGE,
    TWO_EXCHANGE,
    ONE_BELOW_THE_STACK
};

using Aging = enum
{
    A_NONE,
    NORMAL,
    DIFFICULT
};

using AgingAbility = enum
{
    AA_NONE,
    MINUS_ONE_LIFE,
    MINUS_TWO_LIFE,
    HIGHEST_CARD_EQUAL_ZERO,
    STOP
};

class Card
{
public:
    Card(const std::string &a_title);
    std::string title();
protected:
    std::string m_title;
};

#endif // CARD_H
