#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	if (next_permutation(s.begin(), s.end()) == NULL) cout << "0";
	else cout << s;
	return 0;
}
 
 
