#include <iostream>
#include <string>
#include "person.h"

class Player : public Person
{
public:
    Player()
    {
        first_name="John";
        last_name="Doe";
    }
    Player(std::string game_param,std::string fn_param,std::string ln_param)
    {
        m_game = game_param;
        first_name=fn_param;
        last_name=ln_param;
    }

private:
    std::string m_game;
};