#include<iostream>
#include <cmath>
#include <vector>
using namespace std;
bool a[10005];
vector<int> h;
void sang()
{
	for (int i = 2; i <= 100; i++)
	{
		if (a[i] == false)
		for (int j = i * i; j <= 10000; j += i)
			a[j] = true;
	}
	for (int i = 2; i < 1e4 + 1; i++)
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
		for (int i = 0; (i < h.size() && h[i] <= n); i++)
		{
			cout << h[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
 
