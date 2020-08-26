#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int a[3];
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	sort(a, a + 3);
	int k1 = abs (a[0] - a[1]);
	int k2 = abs (a[1] - a[2]);
	int min;
	if (k2 > k1) min = k1;
	else min = k2;
	for (int i = 1; i < 3; i++){
		if (min + a[i - 1] != a[i]){
			cout << min + a[i - 1];
			return 0;
		}
	}
	cout << a[2] + min;
	return 0;
}
 
