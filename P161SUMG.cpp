#include <iostream>
using namespace std;
 
int main() {
	
	int x, y, z, t, k;
	cin >> x >> y >> z >> t >> k;
	int m = x + y + z + t + k;
	if (m % 5 == 0 && m != 0) cout << m / 5;
	else cout << - 1;
 
	return 0;
} 
