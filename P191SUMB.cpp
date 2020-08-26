#include<bits/stdc++.h>
using namespace std;
struct haley
{
	int hard, diem;
};
 
int main()
{	
	int s, n;
	cin >> n >> s;
	int hard[s], diem[s];
	int res[n] = {0};
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < s; i++) cin >> hard[i] >> diem[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (a[i] >= hard[j])
			{
				res[i] += diem[j];
			} 
		}
		cout << res[i] << ' ';
	}
	return 0;
}
 
 
