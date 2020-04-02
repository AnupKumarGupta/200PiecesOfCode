#include<iostream>

using namespace std;

long long find_min_coins(long long size, long long coin_values[], long long total_value) {
    
    // long long  values[size][total_value +1]; THIS DOESN'T WORK
    
    long long**  values= new long long *[size];

    for(long long row = 0 ; row < size; row++) 
    values[row] = new long long[total_value+1];


    for(long long row = 0 ; row < size; row++) values[row][0] = (long long)1;
    for(long long col = 0; col <= total_value; col++) {
        if(col % coin_values[0] == 0) {
            values[0][col] = (long long)1;
        } else {
            values[0][col] = (long long)0;   
        }
    }
    
    for(long long row = 1 ; row < size; row++){
        for(long long col = 0; col <= total_value; col++) {
            if(col >= coin_values[row]) {
                values[row][col] = (values[row-1][col] + values[row][col - coin_values[row]]);
            } else {
                values[row][col] = values[row-1][col];
            }
            values[row][col] %= 1000000007;
        }
    }
    return values[size - 1][total_value];
}

int main() {
	long long n, x;
	cin>>n>>x;
    long long values[n];
    for (long long i = 0; i < n; i++) cin >> values[i];
    cout<<find_min_coins(n, values, x);
    return 0;
} 
