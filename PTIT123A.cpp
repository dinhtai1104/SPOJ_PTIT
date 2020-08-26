#include<bits/stdc++.h>
using namespace std;
int StringToNum (char x[])
{
    int f = 0;
    if (x[0]=='-')
       f = 1;
    int S = 0;
    for (int i=f; i<strlen(x); i++)
    {
        S=(S*10)+(x[i]-'0');
    }
    if (f==1) return 0-S;
    return S;
}
bool cmp(char a[], char b[])
{
	if (StringToNum(a) > StringToNum(b)) return true;
	return false;
}
void Sapxeptu(char a[][100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i], a[j]) > 0)
			{
				char x[1000];
				strcpy(x, a[j]);
				strcpy(a[j], a[i]);
				strcpy(a[i], x);
			}
		}
	}
}
void Sapxepso(char a[][100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (cmp(a[i], a[j]))
			{
				char x[1000];
				strcpy(x, a[j]);
				strcpy(a[j], a[i]);
				strcpy(a[i], x);
			}
		}
	}
}
int main()
{
//	if (cmp("-100", "-99")) cout << "y";
//	else cout << "n";
//	return 0;
	while(1)
	{
		char str[1000];
		cin.getline(str, 1000);
		if (strcmp(str, ".") == 0) return 0;
		char chu[100][100];
		char so[1000][100];
		int danhdau[1000], k = 0, m = 0, dd = 0;
		char *p = strtok(str, ", .");
		while(p != NULL)
		{
			char tmp[1000];
			if (p[0] >= 'a' && p[0] <= 'z') 
			{
				strcpy(chu[k++], p);
				danhdau[dd++] = 0;			
			}
			else 
			{
				strcpy(so[m], p);
				m++;
				danhdau[dd++] = 1;
			}
			p = strtok(NULL, ", .");
		}
		Sapxeptu(chu, k);
		Sapxepso(so, m);
//		for (int i = 0; i < m; i++) cout << so[i] << ' ';
//		cout << endl;
//		for (int i = 0; i < k; i++) cout << chu[i] << ' ';
//		cout << endl;
		int s = m + k;
		m = 0, k = 0;
		for (int i = 0; i < s; i++)
		{
			if (danhdau[i] == 0) cout << chu[k++];
			else cout << so[m++];
			if (i < s - 1) cout << ", ";
			else cout << ".";
		}
		cout << endl;
	}
	return 0;
}
 
 
