//#include<conio.h>
#include<iostream>
 
using namespace std;
long double B[25];
int xl()
{
    int m,n;
    long double x,Ma=0,F;;
    cin>>m>>n;
    if(n==0 && m==0) return 0;
    for(int i=1;i<=m;i++)
    {
        cin>>B[i];
        if(Ma<B[i]) Ma=B[i];
        if(Ma<-B[i]) Ma=-B[i];
    }
 
    F=Ma;
    for(int i=2;i<=n;i++)
    {
        Ma=0;
        for(int j=1;j<=m;j++)
        {
            cin>>x;
            if(F) B[j]*=x/F;
            if(Ma<B[j]) Ma=B[j];
            if(Ma<-B[j]) Ma=-B[j];
        }
        F=Ma;
    }
    int p=1;
    for(int j=2;j<=m;j++)
    if(B[j]>=B[p]) p=j;
    return p;
}
 
int main()
{
    int T=0;
    int K[10000];
    do
    {
        T++;
        K[T]=xl();
    }while(K[T]>0);
    for(int i=1;i<T;i++)
    {
        cout<<K[i]<<"\n";
    }
   // getch();
}
 
  
