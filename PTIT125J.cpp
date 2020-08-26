#include<stdio.h>
 
int main()
{
	int n;
	scanf("%d", &n);
	char a[n][n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] != '.')
				if ((i < n - 2 && a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j]) ||
				(i < n - 2 && j < n - 2 && a[i][j] == a[i + 1][j + 1] && a[i][j] == a[i + 2][j + 2]) ||
				(j < n - 2 && a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2]) ||
				(i < n - 2 && j >= 2 && a[i][j] == a[i + 1][j - 1] && a[i][j] == a[i + 2][j - 2]))
				{
					printf("%c",a[i][j]);
					return 0;
				}
		}
	}
	printf("ongoing");
	return 0;
}
 
 
