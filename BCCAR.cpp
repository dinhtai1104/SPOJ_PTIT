#include <stdio.h>
int max(int a, int b) {
	if (a < b) return b;
	return a;
}
int min(int a, int b) {
	if (a > b) return b;
	return a;
}
int main(void) {
	// your code here
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, Max = -1, Min = 9999;
		scanf("%d",&n);
		for (int i = 0; i < n; i++) {
			int d;
			scanf("%d", &d);
			Max = max(Max, d);
			Min = min(Min, d);
		}
		printf("%d\n", (Max - Min)*2);
	}
	
	return 0;	
} 
