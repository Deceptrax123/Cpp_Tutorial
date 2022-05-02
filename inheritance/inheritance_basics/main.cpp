#include <iostream>
#include <string>
#include "player.h"

int main()
{
    Player p1("Basketball");
    p1.set_first_name("hello");
    std::cout << "Player : " << p1.get_first_name() << std::endl;

    return 0;
}