#include<bits/stdc++.h>
using namespace std;
int BinaryS(long a[], int l, int r, int key)
{
	int res = -1;
	while(l <= r)
	{
		long long mid = (l + r)/2;
		if (a[mid] == key) return mid;
		else if (a[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	return res;
}
bool cmp(long a, long b)
{
	return a < b;
}
void nhap(long a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{	
	int n, m, d = 0;
	long long k;
	cin >> n >> m >> k;
	long a[n], b[m];
	nhap(a, n); nhap(b, m);
	sort(a, a + n, cmp);
	if (k != 0)
	{
		for (int i = 0; i < m; i++)
		{
			if (b[i] != 0 && k % b[i] == 0 )
			{
				int vt = BinaryS(a, 0, n, k / b[i]);
				if (vt > -1)
				{
					for (int j = vt; j >= 0; j--) if (a[j] != k/b[i]) break; else d++;
					for (int j = vt + 1; j < n; j++) if (a[j] != k/b[i]) break; else d++;
				}
			}
		}
	}
	else 
	{
		for (int i = 0; i < m; i++)
		{
			if (b[i] == 0) d += n;
			else
			{
				int vt = BinaryS(a, 0, n, 0);
				if (vt > -1)
				{
					for (int j = vt; j >= 0; j--) if (a[j] != 0) break; else d++;
					for (int j = vt + 1; j < n; j++) if (a[j] != 0) break; else d++;
				}
			}
		}
	}
	cout << d;
	return 0;
}
 
 
