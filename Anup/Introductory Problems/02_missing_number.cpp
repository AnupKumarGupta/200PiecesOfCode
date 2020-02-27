#include<iostream>

using namespace std;

int main(){
	int n;
	long long int sum = 0;
	cin>>n;
	int m;
	for(int i=0 ; i<n-1; i++){
		cin>>m;
		sum = sum + (long long int)m;	
	}
	cout<<((long long int)n*(n+1)/2) - sum;
}
