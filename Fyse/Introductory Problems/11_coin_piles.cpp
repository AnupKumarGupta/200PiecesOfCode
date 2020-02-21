#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int test, x, y;
    cin >> test;
    while (test--)
    {
        cin >> x >> y;
        if ((x + y) % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }

        else
        {
            if (x >= y && (floor((x / 2)) <= y))
                cout << "YES\n";

            else if (y >= x && (floor((y / 2)) <= x))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

    return 0;
}
