#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, ans = 0, digits, temp, mx;
    cin >> num;

    while (num != 0)
    {
        mx = 0;
        digits = floor(log10(num) + 1);
        temp = num;
        while (digits--)
        {
            if (temp % 10 >= mx)
                mx = temp % 10;
            temp = temp / 10;
        }

        num = num - mx;
        ans++;
    }
    cout << ans;
}
