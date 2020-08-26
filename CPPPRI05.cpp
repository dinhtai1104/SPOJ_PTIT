#include <iostream>
using namespace std;
#include<cmath>
#include<vector>
const int MAX = 10000;
bool a[MAX];
vector<int> h;
void sang()
{
	a[0] = a[1] = true;
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		if (a[i] == false)
			for (int j = i * i; j < MAX; j += i)
				a[j] = true;
	}
	for (int i = 2; i < MAX; i++)
	{
		if (!a[i]) h.push_back(i);
	}
}
int main(){
	int t;
	sang();
	cin >> t;
	while(t--)
	{
		int l, r; cin>> l >> r;
		for (int i = l; i <= r; i++) if(!a[i]) cout << i << " ";
		cout << endl;
	}
	return 0;
}
 
