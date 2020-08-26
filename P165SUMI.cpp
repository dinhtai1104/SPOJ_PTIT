#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	if (n % 2 == 0) cout << (n)*(2 + n)/4 - (n)*(n - 1 + 1)/4;
	else cout << -(n + 1)*(1 + n)/4 + (n - 1)*(n - 1 + 2)/4;
	return 0;
}
 
