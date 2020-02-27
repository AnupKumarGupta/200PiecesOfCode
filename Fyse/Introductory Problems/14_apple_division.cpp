#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int min_diff = INT_MAX;

int getBinary(int index[], int values[], int n, int i)
{
    int sum1 = 0, sum2 = 0;
    if (i == n)
    {
        for (int j = 0; j < n; j++)
            if (index[j] == 0)
                sum1 += values[j];
            else
                sum2 += values[j];
        if (abs(sum1 - sum2) < min_diff)
            min_diff = abs(sum1 - sum2);

        return 0;
    }

    index[i] = 0;
    getBinary(index, values, n, i + 1);
    index[i] = 1;
    getBinary(index, values, n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int index[n], values[n];
    for (int i = 0; i < n; i++)
        cin >> values[i];

    getBinary(index, values, n, 0);
    cout << min_diff;

    return 0;
}
