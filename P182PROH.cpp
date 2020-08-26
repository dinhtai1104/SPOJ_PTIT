#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n = s.length();
	int sum = 0;
	if(s[n-1]=='M'&&s[n-2]=='P'){
		for(int i = 0;i<=1;i++){
			sum = sum*10+(s[i]-'0');
		}
		if(sum!=12){
		sum+=12;
		s[1] = sum%10+'0';
		sum/=10;
		s[0] = sum%10+'0';	
		}
 
	}
	else{
		for(int i = 0;i<=1;i++){
			sum = sum*10+(s[i]-'0');
		}
		if(sum==12){
		s[1] ='0';
		s[0] ='0';	
		}
	}
	n-=2;
	for(int i = 0;i<n;i++){
		cout<<s[i];
	}
} 
