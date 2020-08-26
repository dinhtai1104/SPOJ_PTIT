#include <iostream>
using namespace std;
 
int main ()
{
    //IN;
    int N;
    cin>>N;
    string chair;
    cin>>chair;
    //OUT;
    int dem = 1;
    for (int i=0; i<N; i++)
    {
        if (chair[i]=='S') dem++;
        else
        {
            dem++;
            i++;
        }
    }
    if (N>dem) cout<<dem;
    else cout<<N;
 
    return 0;
} 
