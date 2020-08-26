#include <bits/stdc++.h>
using namespace std;
 
main(){
	long long t;
	cin>>t;
	while(t>0){
		long long a;
		cin>>a;
		long long sum=100;
		while(sum>=10){
			sum=0;
			while(a>0){
				sum+=a%10;
				a/=10;
			}
			a=sum;
		}
		cout<<sum<<endl;
		t--;
	}
} 
