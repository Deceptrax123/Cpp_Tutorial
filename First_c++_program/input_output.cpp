#include <iostream>
#include <string>

int main()
{
    /*int age;
    std::string name;

    std::cout << "Enter  your last name " << std::endl;
    std::cin >> name;

    std::cout << "Enter your age" << std::endl;
    std::cin >> age;

    std::cout << "Your name is " << name << " and your age is " << age << std::endl;

    // Chained std::cin
    std::cout << "enter friends name and age " << std::endl;
    std::cin >> name >> age;*/

    //Reading data with spaces.
    int age2;
    std::string name2;

    std::string names;
    int ages;

    std::cout<<"Enter employee full name"<<std::endl;
    std::getline(std::cin,name2);

    std::cout<<"Enter employee age "<<std::endl;
    std::cin>>age2;

    std::cout<<"Enter another name"<<std::endl;
    std::cin>>names;

    std::cout<<"enter another age"<<std::endl;
    std::cin>>ages;



    std::cout<<"The employee name is "<<name2<<" and age is "<<age2<<"and another name is "<<names<<std::endl;

    return 0;
}