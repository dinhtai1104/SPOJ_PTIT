#include<iostream>
#include <math.h>
using namespace std;
int ktcp (long long n) {
    long long x = sqrt (n);
    if (x*x==n) return 1;
    else return 0;
}
long long sumdiv (long long n) {
    long long sum = 0;
    for (long i=1; i<sqrt (n); i++) {
        if (n%i==0) {
            sum+=i;
            sum+=(n/i);
        }
    }
    if (ktcp (n)==1) sum+=sqrt(n);
    return sum;
}
 
int main () {
    int t;
    cin>>t;
    long long n;
    for (int i=1; i<=t; i++) {
        cin>>n;
        long long sum = sumdiv (n);
        cout<<sum<<endl;
    }
    return 0;
}
 
