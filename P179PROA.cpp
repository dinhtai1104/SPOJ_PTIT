#include<stdio.h>
int n;
int da[1000], can[1000];
int dem = 0, res = -1;
char a[1000][100];
int chia(int a, int b)
{
	int i = 1;
	while(a * i <= b)
	{
		i++;
		b += 2;
	}
	return i - 1;
}
void readandprog(int &n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d%d", a[i], &can[i], &da[i]);
		dem += chia(can[i], da[i]);
		if (chia(can[i], da[i]) > res)
		{
			res = chia(can[i], da[i]);
		}
	}
	printf("%d\n", dem);
	for (int i = 0; i < n; i++)
	if (res == chia(can[i], da[i]))
	{
		printf("%s", a[i]); break;
	}
}
int main()
{
	readandprog(n);
} 
