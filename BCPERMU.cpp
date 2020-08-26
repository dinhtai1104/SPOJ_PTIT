#include <stdio.h>
#include<iostream>
int hv[10];
int n;
 
int nhap () {
    int len;
    scanf ("%d", &len);
    return len;
}
 
void khoitao () {
    for (int i=0; i<n; i++) {
        hv[i]=i+1;
    }
}
 
void in () {
    for (int i=0; i<n; i++) {
        printf ("%d", hv[i]);
    }
}
 
int stop (int vt) {
    if (vt==-1) return 1;
    else return 0;
}
 
int hoanvi () {
    int vt=-1;
    for (int i=n-1; i>0; i--) {
        if (hv[i-1]<hv[i]) {
            vt=i-1;
            break;
        }
    }
    if (vt!=-1) {
        for (int i=n-1; i>=0; i--) {
            if (hv[i]>hv[vt]) {
                int tg=hv[vt];
                hv[vt]=hv[i];
                hv[i]=tg;
                break;
            }
        }
        for (int i=vt+1; i<n; i++) {
            for (int j=vt+1; j<n-1; j++) {
                if (hv[j]>hv[j+1]) {
                    int tg=hv[j+1];
                    hv[j+1]=hv[j];
                    hv[j]=tg;
                }
            }
        }
    }
    return vt;
}
 
int main () {
    n = nhap ();
    khoitao ();
    int kt;
    do {
        in ();
        printf ("\n");
        kt=hoanvi ();
    } while (stop (kt)!=1);
   
    return 0;
} 
