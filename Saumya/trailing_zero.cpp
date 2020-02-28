#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
int flag=n;
int r=5;
int var=1;
while(flag){
	flag=int(n/r);

	if(flag==0){break;}
	count+=flag;
	var++;
	r=pow(5,var);
	
}
cout<<count;

return 0;}