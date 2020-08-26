#include<iostream>
using namespace std;
int main(){
	int x, y, n;
	cin >> x >> y >> n;
	int m = n;
	if (n == 1) cout << x;
	else if (n == 2) cout << y;
	else {
		for (int i = 3; i <= m; i++){
			n = y - x;
			x = y;
			y = n;
		}
		cout << n;
	}
	return 0;
}
 
