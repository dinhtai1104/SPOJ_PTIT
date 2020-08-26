#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
long long m,n; 
cin>>m>>n; 
long long a = m%5; 
long long b = m/5; 
long long c = n%5; 
long long d = n-c; 
long long e = n/5; 
long long sum1 = b*d; 
long long sum2 = b*c; 
long long sum3 = a*e; 
long long res = sum1+sum2+sum3; 
for(int i = 1;i<=a;i++){ 
for(int j = 1;j<=c;j++){ 
if((i+j)%5==0) res++; 
} 
} 
cout<<res; 
}  
