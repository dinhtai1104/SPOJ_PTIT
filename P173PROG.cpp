#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	string h;
	while(n--)
	{
		cin >> h;
		if (next_permutation(h.begin(), h.end())) cout << h;
		else cout << "BIGGEST";
		cout << '\n'; 
	}
} 
