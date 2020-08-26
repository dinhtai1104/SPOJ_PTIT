 
/*
   TÃªn bÃ i:  Khung tranh cá»§a Daniel.
   Thuáº­t toÃ¡n: 
   Khá»i táº¡o má»t máº£ng ÄÃ¡nh dáº¥u cÃ¡c thanh cÃ³ Äá» dÃ i tá»« 1 Äáº¿m 100 ( ban Äáº§u cho táº¥t cáº£ cÃ¡c giÃ¡ trá» báº±ng 0)
   
 */
 
#include<iostream>
using namespace std;
int a1[101],i;
void khoitao()
{
	for (i=1;i<=100;i++) a1[i]=0;
}
int main()
{
    int t,k;
    cin>>t;
    for (k=0;k<t;k++)
    {
    	khoitao();
    	int n;
    	cin>>n;
    	int a[n],dem2=0,dem4=0,tong=0;
    	for (i=0;i<n;i++)
    	{
    		cin>>a[i];
    		a1[a[i]]++;
		}
		for (i=1;i<=100;i++) 
		 {
		 	if(a1[i]>=4) 
		 	{
		 		dem4+=(a1[i]/4);
		 		a1[i]%=4;
			 }
			if(a1[i]>=2)
			{
				dem2+=(a1[i]/2);
				a[i]%=2;
			}
		 }
	    cout<<dem2/2+dem4<<endl;
	}
	return 0;
}
 
 
