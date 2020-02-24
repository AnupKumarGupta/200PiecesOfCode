#include<iostream>
using namespace std;
int main(){
	int e=2;
	int o=1;
	int n;
	cin>>n;
	int a[n];
	if(n<=3 && n!=1){
		cout<<"NO SOLUTION";
	}
	else{
	for(int i=0;i<n;i++){
	if(i>=(n/2)){
	
	a[i]=o;
	o=o+2;
	}
	else{
	a[i]=e;
	e=e+2;
	}
	}
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";}
}}