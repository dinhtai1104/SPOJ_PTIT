#include <iostream>
using namespace std;
 
int main ()
{
    int n;
    cin>>n;
    int arr[5003] = {0};
    int a;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        arr[a] = 1;
    }
    int count = 0;
    for (int i=1; i<=n; i++)
        if (arr[i]==0)
            count++;
    cout<<count;
    return 0;
} 
