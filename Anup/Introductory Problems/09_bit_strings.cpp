#include <iostream>

using namespace std;

int main()
{
	long long n, mod_val;
	cin >> n;
    
    for (long long i = 1; i <= n; i++)
        mod_val = 2 * mod_val % 1000000007;
        
    cout << mod_val% 1000000007;
}
