#include <iostream>
using namespace std;
#include<cmath>
#include<vector>
const int MAX = 10009;
bool a[MAX];
vector<int> h;
void sang()
{
	a[0] = a[1] = true;
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		//if (a[i] == false)
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
		int n;
		cin >> n;
		for (int i = 0; h[i] <= n; i++)
		{
			if (!a[n - h[i]])
			{
				cout << h[i] << " " << n - h[i] << endl;
				break;
			}
		}
	}
	return 0;
}
 
