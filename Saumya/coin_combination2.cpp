#include<iostream>
#define m 10^9+7
using namespace std;
int main(){
int n,x;
cin>>n>>x;
int c[n];
for(int i=0;i<n;i++){
cin>>c[i];
}
int dp[x+1][n+1];
for(int i=0;i<=n;i++)
  dp[0][i]=1;
for(int i=1;i<=x;i++)
  dp[i][0]=0; 
for(int i=1;i<=x;i++){
  for(int j=1;j<=n;j++){
  dp[i][j]=dp[i][j-1];
    if(c[j-1]<=i)
      dp[i][j]+=dp[i-c[j-1]][j];
    
  
  }}
cout<<dp[x][n];    
  

return 0;
}
