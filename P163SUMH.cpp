#include <stdio.h>
#include <math.h>
 
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ganA=0, ganB=0, bang=0;
    for (int i=1; i<=6; i++)
    {
        if (abs(a-i)<abs(b-i)) ganA++;
        else if (abs(a-i)>abs(b-i)) ganB++;
        else bang++;
    }
    printf("%d %d %d", ganA, bang, ganB);
    return 0;
} 
