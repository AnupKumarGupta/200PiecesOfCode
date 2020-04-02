#include <bits/stdc++.h>

using namespace std;
long long int value[1000001] = {0};
int main()
{
    long long int coins[101], n, sum;

    value[0] = 1;
    cin >> n >> sum;

    for (long long int i = 0; i < n; i++)
        cin >> coins[i];

    for (long long int i = 0; i < n; i++)
        for (long long int j = 1; j <= sum; j++)
        {
            if (j - coins[i] >= 0)
            {
                value[j] += value[j - coins[i]];
                value[j] %= 1000000007;
            }
        }
    cout << value[sum];
}
