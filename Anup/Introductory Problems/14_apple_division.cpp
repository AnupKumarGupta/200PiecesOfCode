#include <iostream>
using namespace std; 

long long int findMinRec(long long int arr[], long long int i, long long int sumCalculated, long long int sumTotal) 
{ 
	if (i==0) 
		return abs((sumTotal-sumCalculated) - sumCalculated); 


	return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumTotal), 
			findMinRec(arr, i-1, sumCalculated, sumTotal)); 
} 

long long int findMin(long long int arr[], long long int n) 
{ 
	long long int sumTotal = 0; 
	for (long long int i=0; i<n; i++) 
		sumTotal += arr[i]; 

	return findMinRec(arr, n, 0, sumTotal); 
} 

int main() 
{ 
	long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
	cout << findMin(arr, n); 
	return 0; 
} 
