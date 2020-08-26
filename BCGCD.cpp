#include<stdio.h>
long long UCLN (long long a, long long b) {
    while (b!=0) {
        long long x = a%b;
        a = b;
        b = x;
    }
    return a;
}
 
long long BCNN (long long a, long long b) {
    long long x = UCLN (a, b);
    return (a*b)/x;
}
int main(){
	long long a,b;
	do {
		scanf("%lld%lld",&a ,&b);
		if (a == 0&&b ==0) break;
			printf("%lld %lld \n",UCLN(a,b),BCNN(a,b));
 
	}while(1);
	
	return 0;
}
 
