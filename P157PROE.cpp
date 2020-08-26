#include<bits/stdc++.h>
using namespace std;
void Solve()
{
	int n, res = 1;
	cin >> n;
	vector<pair<float, float> > heap;
	heap.resize(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> heap[i].first >> heap[i].second;
	}
	vector<int> f(n + 1, 1);
	for (int i = 1; i <= n; i++)
	{
	//	f[i] = 1;
		for (int j = i + 1; j <= n; j++)
		{
			if (heap[i].first < heap[j].first && heap[i].second > heap[j].second) f[j] = max(f[i] + 1, f[j]);
		}
		res = max(res, f[i]);
	}
	cout << res << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		Solve();
	}
	return 0;
}
 
 
