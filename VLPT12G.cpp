#include<iostream>
#include<math.h>
 
using namespace std;
 
long K[31624];
int n=0;
 
bool ktcp(long t)
{
    if(t%3==2 || t%4==2 || t%4==3) return false;
    long u=sqrt(t);
    if(u*u==t) return true;
    u++;
    if(u*u==t) return true;
    return false;
}
 
 
int main()
{
    long v;
    long u=1;
    do
    {
        v=u*(u+1)/2;
        if(ktcp(v+1))
         K[n++]=v;
         u++;
    }while(v<=1000000000);
    n--;
    long A[30000];
    int tic=0;
    do
    {
        long L,R;
        cin>>L>>R;
        A[tic]=0;
        if(R==0) break;
        for(int i=0;i<=n;i++)
        if(L<=K[i]&& K[i]+1<R) A[tic]++;
        tic++;
    }while(1);
    for(int i=0;i<tic;i++)
    cout<<"Case "<<i+1<<": "<<A[i]<<"\n";
 
}
 
