#include <iostream>

using namespace std;

int main()
{

    long long int n, i, turn = 0, diff;

    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            diff = a[i - 1] - a[i];
            a[i] += diff;
            turn += diff;
        }
    }
    cout << turn;
    return 0;
}
