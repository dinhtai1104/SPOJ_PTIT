#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
 
bool maximize(int &a, int b)
{ 
	if (a < b) 	a = b; 
	else return false; 
	return true; 
}
 
void prepare(char a[], char b[])
{
	int cnt=0;
	b[++cnt]='#';
	for (int i = 1; a[i]; i++)
	{ 
		b[++cnt]=a[i]; 
		b[++cnt]='#'; 
	}
	b[++cnt]=0;
	b[0]='^';
}
 
int manacher(char b[]){
	int C=1, R=1, n=strlen(b+1);
	int r=0;
	int P[n + 2];
	for (int i = 2; i < n; i++) 
	{
    	int i_mirror = 2 * C - i;
    	P[i] = (R>i) ? min(R-i, P[i_mirror]) : 0;
    	if (R > i)
    	{
    		P[i] = min(R - i, P[i_mirror]);
		}
		else P[i] = 0;
		while (b[i - 1 - P[i]] == b[i + 1 + P[i]]) P[i]++;
		maximize(r, P[i]);
		if (i+P[i]>R)
		{ 
			C=i; 	
			R=i+P[i]; 	
		}
	}
	return r;
}
 
#define N 100004
char a[N], b[2*N];
 
main(){
   	ios :: sync_with_stdio(false);
   	int n;
   	cin >> n;
   	while(n--)
   	{
   		cin >> a + 1;
	   	prepare(a, b);
	   	cout << manacher(b) << endl;
   	
	}
} 
