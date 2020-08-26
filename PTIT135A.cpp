#include <bits/stdc++.h>
using namespace std;
 
main(){
	int a,b,c;
	cin>>a>>b>>c;
	int a1[100];
	for(int i=0;i<=100;i++){
		a1[i]=0;
	}
	for(int i=0;i<3;i++){
		int x1,x2;
		cin>>x1>>x2;
		for(int j=x1;j<x2;j++){
			a1[j]+=1;
		}
	}
	long long s=0;
	for(int i=0;i<=100;i++){
		if(a1[i]==1)	s+=a;
		if(a1[i]==2)	s+=2*b;
		if(a1[i]==3)	s+=3*c;	
	}
	cout<<s;
}  
