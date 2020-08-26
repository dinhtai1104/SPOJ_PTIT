#include<iostream>
#include<cmath>
using namespace std;
string daoxau(string h)
{
	string t = "";
	for (int i = h.length() - 1; i >= 0; i--)
		t += h[i];
	return t;
}
 
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string h;
		cin >> h;
		string t = daoxau(h);
//		cout << (int) (h[1] - h[0]);
//		return 0;
 
		int k = 1;
		for (int i = 1; i < h.length(); i++)
		{
			if (abs (h[i] - h[i - 1]) != abs (t[i] - t[i - 1]))
			{
				k = 0;
				break;
			}
		}
		if (k == 0) 
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
		cout << endl;
	}
	
	return 0;
}
 
