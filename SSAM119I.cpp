#include<iostream>
using namespace std;
struct vetor 
{
	int x, y, z;
};
vetor operator * (vetor a, vetor b)
{
	vetor c;
	c.x = a.y * b.z - b.y * a.z;
	c.y = a.z * b.x - a.x * b.z;
	c.z = a.x * b.y - a.y * b.x;
	return c;
}
int operator + (vetor a, vetor b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}
void solve()
{
	int a[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	/*
	A - 1;     AB
	B - 2;  => BC 
	C - 3;     AC 
	D - 4;     
	*/
	vetor ab, ac, ad;
	ab.x = a[1][0] - a[0][0];
	ab.y = a[1][1] - a[0][1];
	ab.z = a[1][2] - a[0][2];
	
	ac.x = a[2][0] - a[0][0];
	ac.y = a[2][1] - a[0][1];
	ac.z = a[2][2] - a[0][2];
	
	ad.x = a[3][0] - a[0][0];
	ad.y = a[3][1] - a[0][1];
	ad.z = a[3][2] - a[0][2];
	
	if (ab*ac + ad == 0) printf("YES\n");
	else printf("NO\n");
}
main(){
	int test;
	scanf("%d", &test);
	while(test--)
	{
		solve();
	}
	return 0;
}
 
