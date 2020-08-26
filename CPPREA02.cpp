#include <stdio.h>
 
int main(void) {
	// your code here
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long n, d = 0, lar, mi;
		scanf("%ld", &n);
		long long a[n + 1], i, b[n];
		lar = n - 1; mi = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%lld", &a[i]);
			if (a[i] == 0)
			{
				b[lar--] = a[i];
			}
			else b[mi++] = a[i];
		}
		for (i = 0; i < n; i++)
		{
			printf("%lld ", b[i]);
		}
		printf("\n");
	}
	return 0;
} 
