#include <iostream>
using namespace std;
int main()
{
    int n,sum,x;
    int sum1=0;
    cin>>n;
     sum=(n*(n+1))/2;
     for(int i=0;i<(n-1);i++){
         cin>>x;
         sum1+=x;
     }
     x=sum-sum1;
     cout<<x;
     return 0;
}
