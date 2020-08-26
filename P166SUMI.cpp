#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n], x[5] = {0};
	for (int i = 0; i < n; i++){
		cin >> a[i];
		x[a[i]]++;
	}
	if (x[0] == 1) cout << "YES";
	else cout << "NO";
	return 0;
}
 
