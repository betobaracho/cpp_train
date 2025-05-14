#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            continue;
            cout << i << endl;
        }
        cout << i << endl;
    }

    return 0;
}