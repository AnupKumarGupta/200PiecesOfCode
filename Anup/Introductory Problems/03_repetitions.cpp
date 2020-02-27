#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	long long int len, max_len=1, curr_len=1;
	getline(cin, str);
	len = str.length();
	for(long long int i=1; i<len; i++) {
		if(str[i] == str[i-1]) {
			curr_len++;
		} else {
			if(max_len < curr_len)
				max_len = curr_len;
			curr_len = 1;
		}
	}
	max_len = (max_len > curr_len )? max_len:curr_len;
	cout<<max_len;
}
