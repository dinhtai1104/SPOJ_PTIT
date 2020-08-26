#include <iostream>
using namespace std;
 
int main ()
{
	//IN;
	int case_i=1;
	int n;
	while (1)
	{
		cin>>n;
		if (n==0) break;
		int arr[22];
		for (int i=1; i<=n; i++)
		{
			cin>>arr[i];
		}
		//OUT;
		int kt0=1;
		int d=0;
		//KTBD:
		for (int k=1; k<=n; k++)
		{
			if (arr[k]!=arr[1])
			{
				kt0=0;
				break;
			}
		}
		if (kt0==0)
		{
			int kt1=0;
			for (int i=1; i<=1000; i++)
			{
				d=i;
				int tg=arr[1];
				for (int k=1; k<=n; k++)
				{
					if (k!=n)
					{
						if (arr[k]>arr[k+1]) arr[k]=arr[k]-arr[k+1];
						else arr[k]=arr[k+1]-arr[k];
					}
					else
					{
						if (arr[k]>tg) arr[k]=arr[k]-tg;
						else arr[k]=tg-arr[k];
					}
				}
				int kt2=1;
				for (int k=1; k<=n; k++)
				{
					if (arr[k]!=arr[1])
					{
						kt2=0;
						break;
					}
				}
				if (kt2==1) {
					kt1=1;
					break;
				}
			}
			if (kt1==1) cout<<"Case "<<case_i<<": "<<d<<" iterations"<<endl;
			else cout<<"Case "<<case_i<<": "<<"not attained"<<endl;
		} else cout<<"Case "<<case_i<<": "<<"0 iterations"<<endl;
		case_i++;
	}
	return 0;
} 
