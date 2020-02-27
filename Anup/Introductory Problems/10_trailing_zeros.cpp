#include <iostream>

using namespace std;

int main()
{
    long long n, count = 0, i;
    cin >> n;

    for (i = 5; n / i >= 1; i *= 5) 
        count += n / i; 

    cout<<count;
    return 0;
}