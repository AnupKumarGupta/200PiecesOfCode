#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int coins[101], n, sum;
    long long int value[1000001];
    value[0] = 1;
    cin >> n >> sum;

    for (long long int i = 0; i < n; i++)
        cin >> coins[i];

    for (long long int i = 1; i <= sum; i++)
    {
        value[i] = 0;
        for (long long int j = 0; j < n; j++)
            if (i - coins[j] >= 0)
            {
                value[i] += value[i-coins[j]];
                value[i] %= 1000000007;
            }
    }
    cout << value[sum];
}
