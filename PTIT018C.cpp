#include<bits/stdc++.h>
using namespace std;
long long aModM(string s, int mod)
{
    long long number = 0;
    for ( int i = 0; i < s.length(); i++)
    {
        number = (number*10 + (s[i] - '0'));
        number %= mod;
    }
    return number;
}
long long ApowBmodM(string &a,  int b,
                                   int m)
{
     long long ans = aModM(a, m);
     int mul = ans;
    for (int i=1; i<b; i++)
        ans = (ans*mul) % m;
 
    return ans;
}
int main()
{
    int t,k;
    scanf("%d", &t);
    for (k=0;k<t;k++)
    {
        string a;
        int b,m;
        cin>>a>>b>>m;
        cout<<ApowBmodM(a,b,m)<<endl;
    }
} 
