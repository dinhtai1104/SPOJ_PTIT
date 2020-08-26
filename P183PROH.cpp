#include<iostream>
#include<algorithm>
using namespace std;
int suma, sumb, sumc;
//int Bin(long a[], long l, long r, long key)
//{
//	while(l <= r)
//	{
//		long mid = (l + r) / 2;
//		if (a[mid] == key) return mid;
//		else if (a[mid] > key) r = mid - 1;
//		else l = mid + 1;
//	}
//	return -1;
//}
 
const int limit = 1e7+7;
int dd[limit] = {0};
 
int main()
{
	long n, m, k, d = 0;
	cin >> n >> m >> k;
	long a[n], b[m], c[k];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < k; i++)
	{
		cin >> c[i];
	}
	dd[a[n-1]]++;
	dd[b[m-1]]++;
	dd[c[k-1]]++;
	for (int i = n - 1; i >= 1; i--) a[i - 1] += a[i],dd[a[i-1]]++;
	for (int i = m - 1; i >= 1; i--) b[i - 1] += b[i],dd[b[i-1]]++;
	for (int i = k - 1; i >= 1; i--) c[i - 1] += c[i],dd[c[i-1]]++;
 
	for(int i = limit ; i >= 0 ;i--){
		if (dd[i] == 3){
			cout << i;
			return 0;
		}
	}	
	cout << 0;
} 
