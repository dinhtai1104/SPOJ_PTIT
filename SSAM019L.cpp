#include<stdio.h>
#include<math.h>
int main()
{
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		for (int i = 1; i < a; i++)
		{
			printf("%.6lf ", (double)sqrt((double)i/a) * b);
		}
		printf("\n");
	}
	return 0;
}
 
 
