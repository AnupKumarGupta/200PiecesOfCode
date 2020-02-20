#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, result = 1, i;
    cin >> n;
    
    for (i = 1; i <= n; i++)
        result = 2 * result % 1000000007;
        
    cout << result;

    return 0;
}
