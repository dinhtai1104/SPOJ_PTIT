#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
 
typedef int data;
data p[5],res=0;
float kq;
 
float tinh(int a,int c,int b,int d)
{
    return fabs(((float)p[a]/p[c]) -((float)p[b]/p[d]));
}
 
int main()
{
    scanf("%d %d %d %d",&p[1],&p[2],&p[3],&p[4]);
    kq=tinh(1,3,2,4);
    if (tinh(3,4,1,2)>kq)
    {
        kq=tinh(3,4,1,2);
        res=1;
    }
    if (tinh(4,2,3,1)>kq)
    {
        kq=tinh(4,2,3,1);
        res=2;
    }
    if (tinh(2,1,4,3)>kq) res=3;
    printf("%d",res);
    return 0;
} 
