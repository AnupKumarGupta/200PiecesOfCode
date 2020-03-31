#include <iostream>
#include <string>

using namespace std;
int main() {
    
    long int t, i=1;
    cin>>t;
    
    while(t--) {
        string original;
        cin>>original;
        cout<<"Case #"<< i++ <<": ";
        for ( std::string::iterator it=original.begin(); it!=original.end(); ++it) {
            char x = *it;
            if(x=='4')
                cout<<2;
            else
                cout<<x;    
            
        }
        cout<<" ";
        for ( std::string::iterator it=original.begin(); it!=original.end(); ++it) {
            char x = *it;
            if(x=='4')
                cout<<2;
            else
                cout<<0;    
            
        } 
        cout<<endl;               
    }
    
}