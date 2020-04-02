
#include<iostream>

using namespace std;

long long find_min_coins(long long size, long long coin_values[], long long total_value) {
    long long* values = (long long* ) calloc(total_value, sizeof(total_value) +1);
    values[0] = 1;

    for (long long int i = 0; i < size ; i++){
        for (long long int j = 1 ; j <= total_value; j++) {
               if (j - coin_values[i] >= 0) {
                    values[j] += values[j-coin_values[i]];
                    values[j] %= 1000000007;
               }
           }
    }
    return values[total_value];
}

int main() {
	long long n, x;
	cin>>n>>x;
    long long values[n];
    for (long long i = 0; i < n; i++) cin >> values[i];
    cout<<find_min_coins(n, values, x);
    return 0;
} 
