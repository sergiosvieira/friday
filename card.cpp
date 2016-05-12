#include "card.h"

Card::Card(const std::string& a_title)
{
    m_title = a_title;
}

std::string Card::title()
{
    return m_title;
}

