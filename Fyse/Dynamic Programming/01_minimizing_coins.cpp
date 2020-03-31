#include <bits/stdc++.h>

using namespace std;

int main()
{
    int coins[101], n, sum;
    long long int value[1000001], minimum;
    value[0] = 0;
    cin >> n >> sum;

    for (int i = 0; i < n; i++)
        cin >> coins[i];
    minimum = coins[0];
    for (int i = 0; i < n; i++)
        if (minimum >= coins[i])
            minimum = coins[i];

    if (minimum > sum)
    {
        cout << "-1";
        return 0;
    }

    for (int i = 1; i <= sum; i++)
    {
        value[i] = INT_MAX;
        for (int j = 0; j < n; j++)
            if (i - coins[j] >= 0)
                value[i] = min(value[i], value[i - coins[j]] + 1);
    }
    int ans;
    if (value[sum] > sum)
        ans = -1;
    else
        ans = value[sum];
    cout << ans;
}
