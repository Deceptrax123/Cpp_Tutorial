#include <iostream>
#include <string>

using namespace std;

void replace(string &word) // Passed by Reference
{
    word[0] = 'A';
}

void change(int &age) // Pass by reference
{
    age = 100;
}

int main()
{
    int n;

    string name = "Nitish";

    replace(name);

    cout << name << endl;

    int Age = 15;

    change(Age);

    cout << Age << endl;
}

/*Note->
For strings pass by reference*/