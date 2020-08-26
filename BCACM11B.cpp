#include<iostream>
using namespace std;
int main()
{
	int t,k;
	cin>>t;
	for (k=0;k<t;k++)
	{
		int a[100][100],i,j,hang,cot,n,d,gt=1,x,y;
		cin>>n>>x>>y;
		hang=n-1; cot=n-1;d=0;
		while(d<=n/2)
		{
			for (i=d;i<=cot;i++) a[d][i]=gt++;
				for (i=d+1;i<=hang;i++) a[i][cot]=gt++;
					for (i=cot-1;i>=d;i--) a[hang][i]=gt++;
						for (i=hang-1;i>d;i--) a[i][d]=gt++;
			d++;hang--;cot--;
		}
		cout<<a[x-1][y-1]<<endl;
	}
} 
