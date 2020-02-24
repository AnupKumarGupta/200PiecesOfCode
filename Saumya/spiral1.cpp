#include<iostream>
using namespace std;
int main(){
long long int t;
long long int temp;
cin>>t;
long long int a,b;
while(t--){
cin>>a>>b;
if(a==b){
temp=(a*a)-(a-1);

}
else if(a>b){
if(a%2==0){
temp=((a*a)-b+1);
}
else{
temp=(a*a)-2*a+b+1;

}
}
else{
if(b%2==0){
temp=(b*b)-2*b+a+1;

}
else{
temp=(b*b)+1-a;

}
}
cout<<temp<<endl;
}

return 0;}