#include <stdio.h>
#include<math.h>
int chek(int a){
	int i;
	if (a<2) return 0;
	for (i=2;i<=sqrt(a);i++)
	if (a % i ==0) return 0;
	return 1;
	
}
 
int main(void) {
	// your code here
	int a;
	
	scanf("%d",&a);
	if (chek(a)) printf("YES");
	else printf("NO");
	
 
	return 0;
}  
