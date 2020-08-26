#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[130] = {0};
	char h[100];
	int d = 0;
	cin >> h;
	for (int i = 0; i < strlen(h); i++)
		a[h[i]]++;
	for (int i = 0; i < 130; i++)
		if(a[i]) d++;
	if (d % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
 
