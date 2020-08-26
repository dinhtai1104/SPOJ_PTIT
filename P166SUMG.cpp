#include<iostream>
using namespace std;
main(){
	long long n;
	cin>>n;
	for( int i=0;i<n;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		if (a==0 && (b==0 || c==0))
			cout<<"NO"<<endl;
		else{
			if (b==c)
				cout<<"YES"<<endl;
			else{
				long long t=c-b;
				if (t<0)
					t=-t;
				if (t%3!=0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}
	}
} 
