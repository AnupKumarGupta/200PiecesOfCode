#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=0;
	int max=0;
	int l=s.length();
	for(int i=0;i<l-1;i++){
		if(s[i]==s[i+1]){
			count+=1;
			if(count>=max){
			max=count;}
			
		}
		else{
			
			if(count>=max){
			max=count;}
			
			count=0;
	}}
		cout<<max+1;
		
		
return 0;}
