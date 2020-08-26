#include <iostream>
#include <math.h>
using namespace std;
 
int n;
int arr[102][102];
void inp()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin>>arr[i][j];
}
 
string F[102][102];
string He2 ()
{
    for (int i=1; i<=n; i++)
    {
        F[0][i]="";
        F[i][0]="";
    }
    F[1][1] = arr[1][1] + '0';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
        	if (i == 1 && j == 1)
        	{
        		continue;
			}
			else if (i == 1) F[i][j] = F[i][j - 1] + (char)(arr[i][j] + '0');
			else if (j == 1) F[i][j] = F[i - 1][j] + (char)(arr[i][j] + '0');
			else
			{
		        char tmp = (arr[i][j]+'0');
	            F[i][j] = min(F[i-1][j], F[i][j-1])+tmp;
        	}
        }
    }
    return F[n][n];
}
void BitoOc(string bin)
{
	while(bin.length() % 3 != 0)
	{
		bin = '0' + bin;
	}
	string find, res = "";
    for (int i=0; i<bin.length(); i+=3)
    {
        find="";
        for (int j=i; j<i+3; j++) {
            find+=bin[j];
        }
        if (find=="000") res += "0";
        if (find=="001") res += "1";
        if (find=="010") res += "2";
        if (find=="011") res += "3";
        if (find=="100") res += "4";
        if (find=="101") res += "5";
        if (find=="110") res += "6";
        if (find=="111") res += "7";
    }
    if (res[0] == '0')
    {
    	for (int i = 1; i < res.length(); i++)
    		cout << res[i];
	}
	else cout << res;
}
bool check()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] != 0) return true;
		}
	}
	return false;
}
int main ()
{
    inp();
    if (!check()) cout << 0;
    else
    {
	    string He2Min = He2();
		BitoOc(He2Min);
	}
    return 0;
} 
