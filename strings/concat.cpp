#include <iostream>
#include <string>

using namespace std;
int main()
{

    string name;
    name = "nitish";

    string lol = "";

    lol = lol + name; // Concatenation

    int x = lol.length();

    int ctr = 0;
    for (int i = 0; i < x; i++)
    {
        cout << lol[i] << endl;

        if (lol[i] == 'n') // character checking
        {
            ctr = 100;
        }
    }

    cout << ctr << endl;
}