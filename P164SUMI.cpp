#include<iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int d = 0;
	for (int i = 0; i < n; i++)
		if (a[k - 1] <= a[i] && a[i] > 0) d++;
	cout << d;
	return 0;
}
 
