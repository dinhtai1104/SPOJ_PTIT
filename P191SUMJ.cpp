#include <iostream>
using namespace std;
long max(long a, long b)
{
	if (a > b) return a;
	return b;
}
int main() {
	
	// your code here
	int n;
	cin >> n;
	long max_ = -1;
	for (int i = 0; i < n; i++)
	{
		long a, b;
		cin >> a >> b;
		max_ = max(a + b, max_);
	}
	cout << max_;
	return 0;
} 
