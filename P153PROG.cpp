// P153PROG - ROUND 3G - chan le
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin >> n >> k;
	if(n%2==0){ // n chan
		if(k<=n/2){
			cout << 2*k-1; // vi tr k so le
		}
		else{
			cout << 2*k-n; // vi tri k so chan
		}
		return 0;
	}
	// n le
	if(k<=n/2+1){
		cout << 2*k-1;
	}
	else{
		cout << 2*k-n-1;
	}
	return 0;
} 
