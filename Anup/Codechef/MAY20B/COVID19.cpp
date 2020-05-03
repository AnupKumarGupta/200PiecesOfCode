#include <iostream>
#include <string>

using namespace std;
int main() {
    
    long int t, i=1;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n; 

        int arr[n], indicator[n], sum = 1, min = 100, max = 0;
        
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        for(int i=0; i<n-1; i++) {
            if(arr[i+1] - arr[i] <=2)
                indicator[i] = 1;
            else
                indicator[i] = 0;            
        }

        for(int i=0; i<n-1; i++) {
            if(indicator[i] !=0 ) {
                sum++;
            } else {
                if (min>sum) min =sum;
                if (max<sum) max =sum;
                sum = 1; 
            }   
            // cout<<min<<" "<<max;
            // cout<<endl;
        }
        if (min>sum) min =sum;
        if (max<sum) max =sum;
        cout<<min<<" "<<max<<endl;
    }
    
}