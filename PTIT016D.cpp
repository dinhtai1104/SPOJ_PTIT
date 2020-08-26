#include <iostream>
#include <algorithm>
#include<functional>
 
using namespace std;
#define nmax 100000
 
long long n, k, a[nmax];
 
void docfile()
{
    cin >> n>> k;
    long i;
    for (i = 0; i < n; i++)
        cin >> a[i];
}
 
void xuli()
{
    sort(a + 1, a + n, greater<int>());
    long i;
    long long s = 0;
    for (i = 0; i <= k; i++)
        s = s + a[i];
    for (i = k+1; i <n; i++)
        s = s - a[i];
    cout << s;
}
 
int main()
{
    docfile();
    xuli();
    return 0;
} 
