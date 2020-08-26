#include<bits/stdc++.h>
using namespace std;
vector<bool> a(1e6 + 5, false);
vector<int> x;
void S()
{
	for (int i = 2; i <= sqrt(1e6 + 5); i++)
	{
		if (!a[i])
		{
			for (int j = i * i; j < 1e6 + 5; j += i)
			{
				a[j] = true;
			}
		}
	}
	for (int i = 2; i < 1e6 + 5; i++)
	{
		if (!a[i]) x.push_back(i);
	}
}
int main()
{
	S();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] * x[i] > n) break;
			else cout << x[i] * x[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
 
 
