#include <bits/stdc++.h>
using namespace std;
void Solve()
{
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		s += (i + '0');
	}
	int i = 1;
	cout << s << " ";
	while(next_permutation(s.begin(), s.end()) != NULL)
	{
		cout << s << " ";
	}
	cout << endl;
}
int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--)
	{
		Solve();
	}
	return 0;
} 
