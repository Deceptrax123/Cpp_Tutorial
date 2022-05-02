#include <iostream>
#include <string>
#include "person.h"

class Player : public Person
{
public:
    Player() = default;
    Player(std::string game_param)
    {
        m_game = game_param;
    }

private:
    std::string m_game;
};