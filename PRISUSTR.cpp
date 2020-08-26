#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long lol;
int a[100005];
string x[100000];
int k = 0;
string numto(int x)
{
	string t = "";
	while(x)
	{
		t = (char)(x%10 + '0') + t;
		x /= 10;
	}
	return t;
}
void sang()
{
	for (int i = 2; i <= sqrt(100000); i++)
	{
		if (!a[i]) 
		{
			for (int j = i * i; j <= 100000; j += i)
			{
				a[j] = 1;	
			}	
		}
	}
	for (int i = 2; i <= 100000; i++) if (!a[i]) x[k] = numto(i), k++;
	//for (int i = 0; i <= k; i++) cout << x[i] <<' ';
}
void solve(string s)
{
	
	for (int i = k - 1; i >= 0; i--) if (s.find(x[i]) < s.length())
	{
		cout << x[i] << endl;
		return;
	}
}
int main()
{
	sang();
	string s;
	while(cin >> s && s != "0")
		solve(s);
	return 0;
}
 
 
