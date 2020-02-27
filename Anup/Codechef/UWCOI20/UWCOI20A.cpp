#include <iostream>

using namespace std;

int main()
{
    long long t, n, x = 0, i, max=0;
    cin >> t;

    while(t--){
        max = -1;
        cin>>n;
        for (i = 0; i < n; i++) {
            cin>>x;
            if(x>max) max=x;
        }
        cout<<max<<endl;
    }    
    return 0;
}