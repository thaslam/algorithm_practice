#include <iostream>

using namespace std;

void print();

int main()
{
    return 0;
}

void print()
{
    if (1 != 2)
    {
        for (int i=0; i<5; i++)
        {
            cout << i << '\n';
        }
        
        char c;
        cout << "Hello World";
        cout << "\n press any key...";
        cin.get(c);
    }
    return;
}

