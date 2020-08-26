// P132SUMD - SUM2 D - thuc hien phep tinh
#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if(a == b + c) printf("%d=%d+%d",a,b,c);
	else if(a == b - c) printf("%d=%d-%d",a,b,c);
	else if(a == -b + c) printf("%d=-%d+%d",a,b,c);
	else if(a == b*c) printf("%d=%d*%d",a,b,c);
	else if(a == b/c) printf("%d=%d/%d",a,b,c);
	else if(a == c/b) printf("%d*%d=%d",a,b,c);
	return 0;
}  
