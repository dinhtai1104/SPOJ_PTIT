#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define MAX 1000005
 
typedef long long ll;
bool ck[MAX];
int Before[MAX];
void Eratosthenes();
void Solve();
void Eratosthenes()
{
	ck[0] = ck[1] = true;
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		if (!ck[i])
		{
			for (int j = i * i; j < MAX; j += i)
			{
				ck[j] = true;
			}
		}
	}
	for (int i = 0; i < MAX; i++)
	{
		Before[i] = !ck[i];
	}
	for (int i = 1; i < MAX; i++)
	{
		Before[i] += Before[i - 1];
	}
}
 
void Solve()
{
	ll left, right;
	cin >> left >> right;
	left = sqrt(left);
	right = sqrt(right);
	cout << Before[right] - Before[left - 1] << endl;
}
 
int main()
{
	Eratosthenes();
	int Test_Case;
	cin >> Test_Case;
	while (Test_Case--)
	{
		Solve();
	}
//	system("pause");
	return 0;
}
 
