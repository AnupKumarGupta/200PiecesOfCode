#include <iostream>

using namespace std;

int main()
{
    long long int n, sum, half_sum, l1 = 0, l2 = 0, temp = 0;
    cin >> n;
    int a[n], b[n];
    sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {

        half_sum = sum / 2;
        for (int i = n; i >= 1; i--)
        {
            if ((temp + i) <= half_sum)
            {
                temp += i;
                a[l1] = i;
                l1++;
            }
            else
            {
                b[l2] = i;
                l2++;
            }
        }
        cout << "YES\n";
        cout << l1 << "\n";
        for (int i = 0; i < l1; i++)
            cout << a[i] << " ";

        cout << "\n"
             << l2 << "\n";

        for (int i = 0; i < l2; i++)
            cout << b[i] << " ";
    }
    return 0;
}
