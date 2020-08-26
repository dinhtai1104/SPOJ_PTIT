#include <iostream>
using namespace std;
 
int OneDigit(int x) //Kiem tra xem co phai 1 chu so hay khong?
{
    if (x>=0 && x<=9)
       return 1;
    return 0;
}
 
int SumOfDigits(int x) //Tinh tong cac chu so cua mot so
{
    int S = 0;
    while (x!=0)
    {
        int mod = x%10;
        S+=mod;
        x=x/10;
    }
    return S;
}
 
int FinalDigit (int x)
{
    while (1)
    {
        if (OneDigit(x)==1)
           break;
    
        x = SumOfDigits(x);
    }
    return x;
}
 
int main ()
{
    int T;
    cin>>T;
    while (T--)
    { 
        int x;
        cin>>x;
        cout<<FinalDigit(x)<<endl;
    }
    return 0;
} 
