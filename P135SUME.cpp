#include<iostream>
using namespace std;
bool tangdan(int a[], int n){
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1]) return false;
	return true;
}
bool giamdan(int a[], int n){
	for (int i = 0; i < n - 1; i++)
		if (a[i] < a[i + 1]) return false;
	return true;
}
int main(){
	int a[8];
	for (int i = 0; i < 8; i++)
		cin >> a[i];
	if (tangdan(a, 8)) cout << "ascending";
	else if (giamdan(a, 8)) cout << "descending";
	else cout << "mixed";
	return 0;
}
 
