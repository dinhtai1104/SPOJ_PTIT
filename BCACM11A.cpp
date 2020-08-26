#include <stdio.h>
using namespace std;
 
int test,i,k,m,n;
 
void xuli()
{
    if ((n<=145) && (m<=180-n) && (k<=900-m-n))
        {
            printf("YES\n");
            return;
        }
    printf("NO\n");
}
 
int main()
{
    scanf("%d",&test);
    for (i=1; i<=test; i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        xuli();
    }
} 
