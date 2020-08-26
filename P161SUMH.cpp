#include<stdio.h>
 
int main()
{
	int n;
	scanf("%d", &n);
	char a[n][n];
	for (int i = 0; i < n; i++)
		scanf("%s", a[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int d = 0;
			if (i < n - 1 && a[i][j] != a[i + 1][j] && a[i + 1][j] == 'o') d++;
			if (j >= 1 && a[i][j] != a[i][j - 1] && a[i][j - 1] == 'o') d++;
			if (j < n - 1 && a[i][j] != a[i][j + 1] && a[i][j + 1] == 'o') d++;
			if (i >= 1 && a[i][j] != a[i - 1][j] && a[i - 1][j] == 'o') d++;
			if (d % 2 == 1)
			{
				printf("NO"); return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
 
 
