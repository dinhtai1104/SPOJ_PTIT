#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	while(1)
	{
		cin >> n; cin.ignore();
		if (n == 0) return 0;
		string s1,s2,s;
		cin >> s1 >> s2 >> s;
		string tmp = "";
		int d = 0;
		while(1)
		{
			
			tmp = "";
			for (int i = 0; i < n; i++)
			{
				tmp = tmp + s2[i] + s1[i]; 
			}
		//	cout << s1 << " " << s2 << " " << tmp << endl;
			if (tmp != s) d++;
			else break;
			s1 = "", s2 = "";
			for (int i = 0; i < n; i++)
			{
				s1 += tmp[i];
			}
			for (int i = n; i < 2 * n; i++)
			{
				s2 += tmp[i];
			}
			if (d > 50) 
			{
				d = -2; break;
			}
		}
		cout << d + 1 << endl;
		
	}
	return 0;
}
 
 
