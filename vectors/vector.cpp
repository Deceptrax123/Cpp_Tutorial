#include <iostream>
#include <vector>

int main()
{

    std::vector<int> numbs = {1, 2, 5, 1};
    std::cout << numbs[0] << std::endl;

    std::cout << numbs[2] << std::endl;

    numbs.push_back(3);

    std::cout<<numbs[4]<<std::endl;

    int x=2;
    numbs.push_back(x);

    std::cout<<numbs[5]<<std::endl;

    int y;
    std::cout<<"Enter number"<<std::endl;
    std::cin>>y;

    numbs.push_back(y);

    std::cout<<numbs[6];


}