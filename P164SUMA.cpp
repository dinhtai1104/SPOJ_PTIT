#include <iostream>
using namespace std;
 
struct name
{
	string ten;
	int sl;
} typedef name;
 
int main ()
{
	name team[3];
	for (int i=1; i<=2; i++)
	{
		team[i].ten="";
		team[i].sl=0;
	}
	int n;
	cin>>n;
	string tg;
	for (int i=1; i<=n; i++)
	{
		cin>>tg;
		if (i==1)
		{
			team[1].ten=tg;
			team[1].sl++;
		}
		else {
			if (tg==team[1].ten) team[1].sl++;
			else
			{
				team[2].ten=tg;
				team[2].sl++;
			}
		}
	}
	if (team[1].sl>team[2].sl) cout<<team[1].ten;
	else if (team[1].sl<team[2].sl) cout<<team[2].ten;
	return 0;
} 
