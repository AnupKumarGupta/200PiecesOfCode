
#include<iostream>

using namespace std;

long long find_min_coins(long long size, long long coin_values[], long long total_value) {
    long long* values = (long long* ) calloc(total_value, sizeof(total_value) +1);
    values[0] = 1;
    for (long long i = 1; i <= total_value; i++) {
        for (long long j = 0; j < size; j++) {
            if (i - coin_values[j] >= 0) {
                values[i] = values[i] + values[i - coin_values[j]];
                values[i] = values[i] % 1000000007;
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
