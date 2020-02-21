#include <iostream>

using namespace std;

int main()
{
    long long int n, i;
    cin >> n;

    if (n == 1)
        cout << "1";

    else if (n < 4)
        cout << "NO SOLUTION";

    else if (n == 4)
        cout << "2 4 1 3";

    else
    {
        for(i = 1; i <= n; i+=2)
            cout<<i<<" ";
        for(i = 2; i <= n; i+=2)
            cout<<i<<" ";
    }
    return 0;
}
