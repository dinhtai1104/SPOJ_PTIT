#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
 
int main()
{	
	int n;
	while(1){
		cin>>n;
		if(n<0) cout<<0<< endl;
		else{
		vector<int> a((2*n)+1,1);
		a[0]=a[1]=0;
		
		for(int i=0;i<=sqrt((2*n)+1);i++){
			if(a[i]==1){
				for(int j=i*2;j<(2*n)+1;j=j+i){
					a[j]=0;
				}
			}
		}
		
		vector<int> v((2*n)+1,0);
		int x=0;
		for(int i=0;i<(2*n)+1;i++){
			x=x+a[i];
			v[i]=x;
		}
		int ans=v[2*n]-v[n];
		
		
		if(n==0) break;
			cout<< ans<< endl;
		}
		
		
	}
		
	
	
	
	
	
 
 	return 0;
} 
