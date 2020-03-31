#include <iostream>
#include <string>

using namespace std;
int main() {
    
    long int t, i=1;
    cin>>t;
    // cout<<((int)'a')-97;
    while(t--) {
        int num_array[26] = {};

        string str;
        cin>>str;
        

        int k, x, i=0;
        cin>>k>>x;

        for ( std::string::iterator it=str.begin() ; it!=str.end() && k>=0 ; ++it) {
            char ch = *it;
            int ascii_ = ((int)ch) - 97;
            if(num_array[ascii_] < x) {
                num_array[ascii_]++;
                i++;
            }
            else {
                k--;
            }
        }
        cout<<i<<endl;               
    }
    
}