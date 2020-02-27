#include <iostream>

using namespace std;

int main()
{
	long long n, sum, i, series_sum = 0, c_1=0, c_2=0;
	cin >> n;
	sum = n * (n + 1) / 2;
	int arr[n+1];
	if (sum % 2 != 0)
		cout << "NO";
	else
	{
		cout << "YES";
		for (i = n; i > 0; i--)
		{
			if ((series_sum + i) <= sum/2){
				series_sum += i;
				arr[i] = 1;
				c_1++;
			} else {
				arr[i] = 2;
				c_2++;
			}

		}
		cout<<"\n"<<c_1<<"\n";
		for(i=1; i<=n; i++){
			if(arr[i] == 1) cout<<i<<" ";
		}
		cout<<"\n"<<c_2<<"\n";
		for(i=1; i<=n; i++){
			if(arr[i] == 2) cout<<i<<" ";
		}
	}
}
