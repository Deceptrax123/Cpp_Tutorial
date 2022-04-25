#include <iostream>

int Sum(int x,int y)
{
    return (x+y);
}

int main()
{
  
    int x=12;
    int y=9;

    int sum=Sum(x,y);

    std::cout<<"The sum of numbers is "<<sum<<std::endl;
    
}