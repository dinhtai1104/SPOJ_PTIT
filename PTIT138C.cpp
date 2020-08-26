#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		char s[100], kq[100] = "";
		cin >> s;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
		}
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c') strcat(kq, "2");
			if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f') strcat(kq, "3");
			if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i') strcat(kq, "4");
			if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l') strcat(kq, "5");
			if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o') strcat(kq, "6");
			if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's') strcat(kq, "7");
			if (s[i] == 't' || s[i] == 'u' || s[i] == 'v') strcat(kq, "8");
			if (s[i] == 'x' || s[i] == 'y' || s[i] == 'z' || s[i] == 'w') strcat(kq, "9");
		}
		bool flag = true;
		for (int i = 0; i < strlen(kq)/2; i++)
		{
			if (kq[i] != kq[strlen(kq) - i - 1])
			{
				flag = false;
				cout << "NO" << endl;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
	}
	return 0;
}
 
 
