#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
double Distance(int xa,int ya, int xb,int yb)
{
	return sqrt(round(pow(xb-xa,2))+round(pow(yb-ya,2)));
}
int main()
{
	cout<<setprecision(2)<<fixed;
	int t,k;
	cin>>t;
	for (k=0;k<t;k++)
	{
		int k;
		cin>>k;
		int xa,ya,xb,yb,xc,yc,xd,yd;
		cin>>xa>>ya>>xb>>yb>>xc>>yc>>xd>>yd;
		double disab,disac,disad,xe,ye;
		disab=Distance(xa,ya,xb,yb);
		disac=Distance(xa,ya,xc,yc);
		disad=Distance(xa,ya,xd,yd);
		double x=(disab*disac)/(disad*k);
		// cout<<disab<<" "<<disac<<" "<<disad<<" "<<x<<endl;
		if(x>disac) cout<<"No solution"<<endl;
		else
		{
			xe=(x/disac)*(xc-xa)+xa;
			ye=(x/disac)*(yc-ya)+ya;
			cout<<xe<<" "<<ye<<endl;
		}
	}
	return 0;
} 
