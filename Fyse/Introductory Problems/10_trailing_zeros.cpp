#include <iostream>

using namespace std;

int main()
{
    long long int n, result = 0, i;
    cin >> n;

    for (i = 5; i <= n; i *= 5)
        result += n / i;

    cout << result;

    return 0;
}
