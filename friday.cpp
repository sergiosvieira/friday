#include "friday.h"

#include <algorithm>
#include "locale_eng.h"

std::vector<RobinsonCard> Friday::m_agingCards =
{
    {kVeryHungry, 0, 2, Aging::DIFFICULT, AgingAbility::MINUS_TWO_LIFE},
    {kIdiotic, -4, 2, Aging::DIFFICULT, AgingAbility::NONE},
    {kSuicidal, -5, 2, Aging::DIFFICULT, AgingAbility::NONE},
    {kVeryTired, 0, 2, Aging::NORMAL, AgingAbility::STOP},
    {kStupid, -2, 2, Aging::NORMAL, AgingAbility::NONE},
    {kStupid, -2, 2, Aging::NORMAL, AgingAbility::NONE},
    {kHungry, -1, 2, Aging::NORMAL, AgingAbility::MINUS_ONE_LIFE},
    {kScared, 0, 2, Aging::NORMAL, AgingAbility::HIGHEST_CARD_EQUAL_ZERO},
    {kScared, 0, 2, Aging::NORMAL, AgingAbility::HIGHEST_CARD_EQUAL_ZERO},
    {kDistracted, -1, 2, Aging::NORMAL, AgingAbility::NONE}
};

std::vector<RobinsonCard> Friday::m_startingCards =
{
    {kDistracted, -1, SpecialAbility::NONE, 1},
    {kDistracted, -1, SpecialAbility::NONE, 1},
    {kDistracted, -1, SpecialAbility::NONE, 1},
    {kDistracted, -1, SpecialAbility::NONE, 1},
    {kDistracted, -1, SpecialAbility::NONE, 1},

    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},
    {kWeak, 0, SpecialAbility::NONE, 1},

    {kFocused, 1, SpecialAbility::NONE, 1},
    {kFocused, 1, SpecialAbility::NONE, 1},
    {kFocused, 1, SpecialAbility::NONE, 1},

    {kGenius, 2, SpecialAbility::NONE, 1},

    {kEating, 0, SpecialAbility::PLUS_TWO_LIFE, 1}
};

std::vector<RobinsonCard> Friday::m_robinson =
{
    {kMimicry, 0, SpecialAbility::ONE_COPY, 1},
    {kExperience, 3, SpecialAbility::PLUS_ONE_CARD, 1},
    {kStrategy, 3, SpecialAbility::ONE_EXCHANGE, 1},
    {kStrategy, 0, SpecialAbility::TWO_EXCHANGE, 1},
    {kMimicry, 1, SpecialAbility::ONE_COPY, 1},
    {kWeapon, 2, SpecialAbility::NONE, 1},
    {kFood, 0, SpecialAbility::PLUS_ONE_LIFE, 1},
    {kDeception, 0, SpecialAbility::ONE_BELOW_THE_STACK, 1},
    {kDeception, 1, SpecialAbility::ONE_BELOW_THE_STACK, 1},
    {kEquipment, 0, SpecialAbility::PLUS_TWO_CARDS, 1},
    {kFood, 0, SpecialAbility::PLUS_ONE_LIFE, 1},
    {kBooks, 0, SpecialAbility::PHASE_MINUS_ONE, 1},
    {kFood, 2, SpecialAbility::PLUS_ONE_LIFE, 1},
    {kVision, 2, SpecialAbility::SORT_THREE_CARDS, 1},
    {kRealization, 1, SpecialAbility::ONE_DESTROY, 1},
    {kWeapon, 2, SpecialAbility::NONE, 1},
    {kFood, 1, SpecialAbility::PLUS_ONE_LIFE, 1},
    {kStrategy, 2, SpecialAbility::ONE_EXCHANGE, 1},
    {kRepeat, 2, SpecialAbility::ONE_DOUBLE, 1},
    {kRealization, 2, SpecialAbility::ONE_DESTROY, 1},
    {kEquipment, 0, SpecialAbility::PLUS_TWO_CARDS, 1},
    {kStrategy, 0, SpecialAbility::TWO_EXCHANGE, 1},
    {kRealization, 0, SpecialAbility::ONE_DESTROY, 1},
    {kWeapon, 4, SpecialAbility::NONE, 1},
    {kWeapon, 4, SpecialAbility::NONE, 1},
    {kRepeat, 1, SpecialAbility::ONE_DOUBLE, 1},
    {kExperience, 2, SpecialAbility::PLUS_ONE_CARD, 1},
    {kFood, 1, SpecialAbility::PLUS_ONE_LIFE, 1},
};

std::vector<HazardCard> Friday::m_hazard =
{
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kWildAnimals, 4, 4, 7, 11},
    {kWildAnimals, 4, 4, 7, 11},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kWithTheRaftToTheWreck, 0, 0, 1, 3},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kWildAnimals, 4, 4, 7, 11},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kWildAnimals, 4, 4, 7, 11},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kWithTheRaftToTheWreck, 1, 0, 1, 3},
    {kCannibals, 5, 5, 9, 14},
    {kCannibals, 5, 5, 9, 14},
    {kExploringTheIsland, 2, 1, 3, 6},
    {kFurtherExploringTheIsland, 3, 2, 5, 8},
    {kExploringTheIsland, 2, 1, 3, 6},
};

std::vector<HazardRobinsonCard> Friday::m_hazardCards = {};

Friday::Friday()
{
    for (int i = 0; i < 30; ++i)
    {
        HazardRobinsonCard h{m_robinson[i], m_hazard[i]};
        m_hazardCards.push_back(h);
    }
    initialize();
}

void Friday::run()
{
    Level level = Level::FIRST;
    bool done = false;
    bool gameOver = false;
    while (!done)
    {
        if (m_hazardDeck.size() > 1)
        {
            HazardRobinsonCard* first = m_hazardDeck.pop();
            HazardRobinsonCard* second = m_hazardDeck.pop();
            Output::showHazard(first, second);
            HazardRobinsonCard* choosen = Input::chooseHazard(first, second);
            if (choosen == first)
            {
                m_hazardDiscardDeck.push(second);
            }
            else
            {
                m_hazardDiscardDeck.push(first);
            }
            int freeCards = choosen->hazardCard().freeCards();
            int hazardValue = 0;
            switch (level)
            {
                case Level::FIRST:
                    hazardValue = choosen->hazardCard().greenHazard();
                break;
                case Level::SECOND:
                    hazardValue = choosen->hazardCard().yellowHazard();
                break;
                case Level::THIRD:
                    hazardValue = choosen->hazardCard().redHazard();
                break;
            }
            int total = 0;
            for (int i = 0; i < freeCards; ++i)
            {
                RobinsonCard* card = m_robinsonDeck.pop();
                total += card->fightingValue();
                m_gameArea.push_back(card);
                Output::showRobinsonCard(card);
            }
            bool done = Input::continue();
            while (!done)
            {
                if (m_life > 0)
                {
                    --m_life;
                }
                else
                {
                    gameOver = true;
                    done = true;
                    break;
                }
                done = Input::continue();
            }
        }
        else
        {

        }
    }
}

void Friday::initialize()
{
    initHazardDeck();
    initRobinsonDeck();
    initAgingDiffucultDeck();
    initAgingNormalDeck();
}

void Friday::initHazardDeck()
{
    std::random_shuffle (m_hazardCards.begin(), m_hazardCards.end());
    for (auto row: m_hazardCards)
    {
        m_hazardDeck.push(&row);
    }
}

void Friday::initRobinsonDeck()
{
    std::random_shuffle (m_startingCards.begin(), m_startingCards.end());
    for (auto row: m_startingCards)
    {
        m_robinsonDeck.push(&row);
    }
}

void Friday::initAgingNormalDeck()
{
    std::random_shuffle (m_agingCards.begin() + 3, m_agingCards.begin() + 9);
    for (int i = 3; i < 10; ++i)
    {
        m_agingNormalDeck.push(&m_agingCards[i]);
    }
}

void Friday::initAgingDiffucultDeck()
{
    std::random_shuffle (m_agingCards.begin(), m_agingCards.begin() + 2);
    for (int i = 0; i < 30; ++i)
    {
        m_agingNormalDeck.push(&m_agingCards[i]);
    }
}

