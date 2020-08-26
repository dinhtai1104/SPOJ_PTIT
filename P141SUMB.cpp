#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n], d[10000] = {0};
	for (int i = 0; i < n; i++){
		cin >> a[i];
		d[a[i]]++;
	}
	int dem = 0;
	for (int i = 1; i < n + 1; i++){
		if (d[i] == 0) dem++;
	}
	cout << dem;
	return 0;
}
 
