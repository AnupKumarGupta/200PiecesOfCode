#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=2;
	int var=1;
	int p=pow(10,9)+7;
	for(int i=0;i<n;i++){
		var=((count%p)*(var%p))%p;
	}
	cout<<var;
	return 0;
}