
#include <iostream>

using namespace std;

int main() {

    long long int n, i = 0, index;
    cin>>n;
    
    long long int a[n];

    while (i != n-1)
    {
        cin>>index;
        //scanf("%lld",&index);
        a[index-1] = 1;
        i++;
    }

    for (long long int j = 0 ; j < n; j++)
    {
        if (a[j] != 1)
        {
            cout<<j+1;
           break;
        }
    }
    return 0;
}
