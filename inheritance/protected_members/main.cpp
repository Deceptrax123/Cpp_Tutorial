#include <iostream>
#include <string>
#include "player.h"

int main()
{
    Player p1("Cricket","John","snow");

    std::cout << "Player : " << p1.get_first_name()<<" "<<p1.get_last_name() << std::endl;

    return 0;
}