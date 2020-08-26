#include <iostream>
using namespace std;
#include<cmath>
#include<vector>
#include<algorithm>
const int MAX = 100009;
int a[MAX];
vector<int> h;
void sang()
{
	a[0] = a[1] = 1;
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		
		if(a[i] == 0)
		{
			for (int j = i * i; j < MAX; j += i)
				if (a[j] == 0) a[j] = i;
				else a[j] = min(a[j],i);
		}
		
	}
	for(int i = 0; i < MAX ; i++ )
	{
		if(a[i] == 0) a[i] = i;
	}
}
int main(){
	int t;
	sang();
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
 
