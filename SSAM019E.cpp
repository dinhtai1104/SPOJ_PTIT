#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
 
int main() {
	
	// your code here
	int n;
	long s, d = 0;
	scanf("%d%ld", &n, &s);
	long a[n];
	for (int i = 0; i < n; i++) scanf("%ld", &a[i]);
	sort(a, a + n);
	for (int i = n - 1; i >= 0; i--)
	{
 
		d += s/a[i];
		s %= a[i];
	}
	printf("%ld", d);
	return 0;
} 
