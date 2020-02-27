#include <iostream>
using namespace std;

int main() {
	long long int t,y,x,m;
	cin>>t;
	while(t--){
		cin>>y>>x;
		m = max(x,y);
		cout<< m*m - (m-1) + (m%2 ? x-y : y-x) << "\n";
	}
	return 0;
}