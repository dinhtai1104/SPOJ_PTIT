#include <iostream>
using namespace std;
 
int main ()
{
	int r, c;
	cin>>r>>c;
	char scl[11][11];	//scl: cocacola :v;
	int dd[11][11];
	for (int i=1; i<=r; i++)
	{
		for (int j=1; j<=c; j++)
		{
			cin>>scl[i][j];
			if (scl[i][j]=='S') dd[i][j]=-1;
			else dd[i][j]=0;
		}
	}
	//OUT;
	//Check row;
	for (int i=1; i<=r; i++)
	{
		int kt=1;
		for (int j=1; j<=c; j++)
		{
			if (dd[i][j]==-1)
			{
				kt=0;
				break;
			}
		}
		if (kt==1) for (int j=1; j<=c; j++) dd[i][j]=1;
	}
	//Check colum;
	for (int j=1; j<=c; j++)
	{
		int kt=1;
		for (int i=1; i<=r; i++)
		{
			if (dd[i][j]==-1)
			{
				kt=0;
				break;
			}
		}
		if (kt==1) for (int i=1; i<=r; i++) dd[i][j]=1;
	}
	//Dem;
	int dem=0;
	for (int i=1; i<=r; i++)
		for (int j=1; j<=c; j++)
			if (dd[i][j]==1) dem++;
	cout<<dem;
	return 0;
} 
