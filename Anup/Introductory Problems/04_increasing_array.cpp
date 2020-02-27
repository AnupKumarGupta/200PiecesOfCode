#include<iostream>
#include<string>
using namespace std;

int main() {
	long long int n, turns=0, diff;
	cin>>n;
	long long int arr[n];
	for(long long int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(long long int i=1; i<n; i++) {
		if(arr[i-1]>arr[i]) {
			diff = arr[i-1] - arr[i];
			arr[i] = arr[i-1];
			turns += diff;
		}
	}
	cout<<turns;
}
