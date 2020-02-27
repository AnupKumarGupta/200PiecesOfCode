#include <iostream>

using namespace std;

int main()
{
    long long t, n, x, i,e_c=0,o_c=0;
    cin >> t;

    while(t--){
        e_c=0,o_c=0;
        cin>>n;
        for (i = 0; x<n; i++) {
            cin>>x;
            if(x%2==0) e_c++;
            else o_c++;
        }
        cout<<o_c*e_c<<endl;
    }    
    return 0;
}