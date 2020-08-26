#include <iostream>
 
int main ()
{
    int n = 0;
    int arr[5];
    int tmp;
    for (int i=1; i<=4; i++)
    {
        scanf("%d", &tmp);
        int kt = 0;
        for (int i=1; i<=n; i++)
        {
            if (tmp==arr[i])
            {
                kt = 1;
                break;
            }
        }
        if (kt==0)
        {
            n++;
            arr[n]=tmp;
        }
    }
    printf ("%d", 4-n);
    return 0;
} 
