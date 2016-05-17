#ifndef FRIDAY_H
#define FRIDAY_H

#include <vector>
#include <stack>
#include "robinson_card.h"
#include "hazard_robinson_card.h"

enum class Level
{
    FIRST,
    SECOND,
    THIRD
};

class Friday
{
public:    
    Friday();
    void run();
protected:    
    int m_reserveLife = 2;
    int m_life = 20;
    static std::vector<RobinsonCard> m_agingCards;
    static std::vector<RobinsonCard> m_startingCards;
    static std::vector<RobinsonCard> m_robinson;
    static std::vector<HazardCard> m_hazard;
    static std::vector<HazardRobinsonCard> m_hazardCards;
    // decks
    std::stack<HazardRobinsonCard*> m_hazardDeck;
    std::stack<HazardRobinsonCard*> m_hazardDiscardDeck;
    std::stack<RobinsonCard*> m_robinsonDeck;
    std::stack<RobinsonCard*> m_robinsonDiscardDeck;
    std::stack<RobinsonCard*> m_agingNormalDeck;
    std::stack<RobinsonCard*> m_agingDifficultDeck;
    std::vector<RobinsonCard*> m_gameArea;
private:
    void initialize();
    void initHazardDeck();
    void initRobinsonDeck();
    void initAgingNormalDeck();
    void initAgingDiffucultDeck();
};


#endif // FRIDAY_H
