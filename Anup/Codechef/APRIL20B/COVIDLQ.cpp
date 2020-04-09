#include <iostream>
#include <string>

using namespace std;
int main() {
    
    long int t, i=1;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n; 

        int arr[n],prev_index = -6,flag=0;
        
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++) {
            if(arr[i]==1){
                //cout<<i - prev_index <<endl;
                if(i - prev_index >= 6) {prev_index=i;}
                else{flag=1; break;}
            } 
        }

        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}