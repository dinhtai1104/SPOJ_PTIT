#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct data
{
    int p, q;
    data (int x, int y)
    {
        p = x;
        q = y;
    }
} typedef data;
 
int main ()
{
    vector <data> v;
    int x, y, a, b;
    cin>>x>>y>>a>>b;
    for (int i=a; i<=x; i++)
    {
        for (int j=b; j<i && j<=y; j++)
        {
            v.push_back(data(i, j));
        }
    }
    cout<<v.size()<<endl;
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i].p<<" "<<v[i].q<<endl;
    }
    return 0;
} 
 
