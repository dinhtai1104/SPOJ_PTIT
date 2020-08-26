#include<iostream>
 
using namespace std;
int main(){
	long long n;
	cin >> n;
	if(n<3) cout << n;
	else if(n==4) cout << 12;
	else if (n==6) cout << 60;	
	else if (n%2!=0) cout << n*(n-1)*(n-2);
	else if (n%3==0) cout << (n-1)*(n-2)*(n-3);
	else cout << n*(n-1)*(n-3);
} 
