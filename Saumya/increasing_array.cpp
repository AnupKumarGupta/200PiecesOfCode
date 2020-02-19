#include <iostream>
using namespace std;
int main(){
long long int n;
long long int flag=1,count=0;
cin>>n;
long long int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
while(flag==1){
flag=0;
for(int i=0;i<n-1;i++){
if(arr[i+1]<arr[i]){
	count=count+(arr[i]-arr[i+1]);
arr[i+1]=arr[i+1]+(arr[i]-arr[i+1]);

flag=1;
}
}
}
cout<<count;


return 0;}
