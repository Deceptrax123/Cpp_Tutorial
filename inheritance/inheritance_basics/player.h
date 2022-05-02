#include <iostream>
#include <string>
#include "person.h"

class Player : public Person
{
public:
    Player(std::string game_param)
    {
        m_game = game_param;
    }
    Player() = default;

private:
    std::string m_game;
};