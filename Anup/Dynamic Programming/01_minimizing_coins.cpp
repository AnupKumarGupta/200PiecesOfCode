
#include<iostream>

using namespace std;

long find_min_coins(long size, long coin_values[], long total_value) {
    long* values = (long* ) malloc(total_value * sizeof(total_value));
    for (long i = 1; i <= total_value; i++) {
        values[i] = INT32_MAX;
        for (long j = 0; j < size; j++) {
            if (i - coin_values[j] >= 0) {
                values[i] = min(values[i], values[i - coin_values[j]] + 1);
            }
        }        
    }
    return values[total_value] == INT32_MAX ? -1 : values[total_value];
}

int main() {
	long n, x;
	cin>>n>>x;
    long values[n];
    for (long i = 0; i < n; i++) cin >> values[i];
    cout<<find_min_coins(n, values, x);
    return 0;
} 
