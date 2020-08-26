#include <iostream>
using namespace std;
 
int arr[5];
int n=4;
int k=3;
 
void khoitao ()
{
	for (int i=1; i<=k; i++)
	{
		arr[i]=i;
	}
}
 
int hoanvi4 ()
{
	int i=k;
	while (i>0 && arr[i]==n-k+i) i--;
	if (i==0)
	{
		return 0;
	}
	else
	{
		arr[i]++;
		for (int j=i+1; j<=k; j++)
		{
			arr[j]=arr[i]+j-i;
		}
		return 1;
	}
}
 
int kttgksb (int a, int b, int c)
{
	if (a+b>c && b+c>a && c+a>b) return 1;
	return 0;
}
 
int kttgsb (int a, int b, int c)
{
	if (a+b==c || b+c==a || c+a==b) return 1;
	return 0;
}
 
int main ()
{
	//IN;
	int len[5];
	for (int i=1; i<=4; i++)
	{
		cin>>len[i];
	}
	//OUT;
	khoitao();
	int ktksb = 0;
	int ktsb = 0;
	while (1)
	{
		if (kttgksb (len[arr[1]], len[arr[2]], len[arr[3]])==1) ktksb=1;
		if (kttgsb (len[arr[1]], len[arr[2]], len[arr[3]])==1) ktsb=1;
		if (hoanvi4 ()==0) break;
	}
	if (ktksb==1) cout<<"TRIANGLE";
	else if (ktsb==1) cout<<"SEGMENT";
	else cout<<"IMPOSSIBLE";
} 
