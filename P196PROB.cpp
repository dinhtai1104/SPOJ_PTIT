#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	
	// your code here
	int a, b, c;
	cin >> a >> b >> c;
	int maxx = max (a, max (b, c));
	int minn = min (a, min (b, c));
	cout << maxx - minn;
 
	return 0;
} 
