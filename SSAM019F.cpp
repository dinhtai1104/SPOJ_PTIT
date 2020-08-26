#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
int main() {
	int test;
	scanf("%d", &test);
	while(test--)
	{
		ll n, f, f1 = 1, f2 = 1;
		scanf("%lld", &n);
		if (n < 3) f = 1;
		for (int i = 2; i < n; i++)
		{
			f = f1 + f2;
			f2 = f1;
			f1 = f;
		}
		printf("%lld\n", f);
	}
	// your code here
 
	return 0;
} 
