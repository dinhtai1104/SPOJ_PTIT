#include<iostream>
using namespace std;
int main() {
	int a[10];
	int d = 0;
	int dem[1000] = {0};
	for (int i = 0; i < 10; i++){
		cin >> a[i];
		dem[a[i] % 42]++;
	} 
	for (int i = 0; i < 1000; i++)
		if (dem[i]) d++;
	cout << d;
	return 0;
}
 
