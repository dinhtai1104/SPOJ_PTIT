#include <iostream>
#include <cmath>
using namespace std;
 
long n;
long long s, a[200][15],res=-2147483647;
int main()
{
    long i,j,k,u;
 
    cin >> n;
    for (i=1; i<=n; i++)
        for (j=1; j<=11; j++)
            cin >> a[i][j];
 
    for (i=1; i<=n-2; i++)
        for (j=i+1; j<=n-1; j++ )
            for (k=j+1; k<=n; k++)
            {
                s=0;
                for (u=1; u<=11; u++)
                    s=s+max(a[i][u],max(a[j][u],a[k][u]));
                res=max(res,s);
            }
    cout << res;
    return 0;
} 
