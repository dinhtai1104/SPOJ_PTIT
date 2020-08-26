#include<iostream>
#include <algorithm>
using namespace std;
bool isSplittable(long long n, long long m) 
{ 
    int total_sum = (n * (n + 1)) / 2; 
    int sum_s1 = (total_sum + m) / 2; 
    int sum_s2 = total_sum - sum_s1; 
    if (total_sum < m) 
        return false; 
    if (sum_s1 + sum_s2 == total_sum && 
        sum_s1 - sum_s2 == m) 
        return (__gcd(sum_s1, sum_s2) == 1); 
    return false; 
} 
void Solve()
{
	long long a, m;
	cin >> a >> m;
	if(isSplittable(a, m)) cout << "Yes\n";
	else cout << "No\n";
}
int main(){
	int t;
	cin >> t;
	//cin.ignore();
	while(t--)
	{
		Solve();
	}
	return 0;
}
 
