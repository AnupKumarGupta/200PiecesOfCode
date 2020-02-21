#include <iostream>

using namespace std;

int main()
{
    long long int sum = 0, num, actual_sum, i,n;

    cin >> n;

    actual_sum = (n * (n + 1)) / 2;

    for (i = 0; i < (n - 1); i++)
    {
        cin >> num;
        sum += num;
    }
    cout << actual_sum - sum;
    return 0;
}
