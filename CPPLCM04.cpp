#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
void Solve()
{
	long long x, tmp = 0; cin >> x;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		tmp = (s[i] - '0' + tmp * 10) % x;
	}
	cout << __gcd(tmp, x) << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		Solve();
	}
	return 0;
}
 
