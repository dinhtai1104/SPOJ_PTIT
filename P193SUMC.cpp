#include <stdio.h>
 
int main(void) {
	// your code here
	int q;
	scanf("%d", &q);
	while(q--)
	{
		long long n;
		scanf("%lld", &n);
		if (n <= 1) n = 2;
		printf("%lld\n", n - 2);
	}
 
	return 0;
} 
