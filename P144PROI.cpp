#include <stdio.h>
 
int main () {
	int n;
	scanf ("%d",&n);
 
	long a[n][2], amin, amax;
 
	for (int i=0; i<n; i++) {
		scanf ("%ld%ld",&a[i][0],&a[i][1]);
		if (i==0) {
			amin=a[i][0];
			amax=a[i][1];
		} else {
			if (a[i][0]<amin) {
				amin=a[i][0];
			}
			if (a[i][1]>amax) {
				amax=a[i][1];
			}
		}
	}
	int kt=0;
	int vt;
	for (int i=0; i<n; i++) {
		if (a[i][0]==amin) {
			if (a[i][1]==amax) {
				vt=i+1;
				kt=1;
				break;
			}
		}
	}
	if (kt==0) {
		printf ("-1");
	} else {
		printf ("%d",vt);
	}
	return 0;
}
 
