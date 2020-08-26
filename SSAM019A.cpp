#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int T;
	cin>> T;
	long long n,m;
	int dem;
	while(T--){
		dem=0;
		cin>>n;
 
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				m=n/i;
				if(m%2==0)dem=dem+1;
				if(i%2==0)dem=dem+1;
				if(n%2==0&&i*i==n) dem=dem-1;
			}
		}
 
		cout<< dem<<endl;
	}
 	return 0;
} 
