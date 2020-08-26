#include <stdio.h>
#include <string.h>
using namespace std;
 
int pos(char s[10])
{
    int i;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]=='?') return i;
    }
    return -1;
}
 
int strtonum(char s[10])
{
    int i,sum=0,mul=1;
    for (i=strlen(s)-1; i>=0; i--)
    {
        sum=sum+(s[i]-48)*mul;
        mul=mul*10;
    }
    return sum;
}
 
int main()
{
    char a[10],c[10],b[10];
    scanf("%s \n",&a);
    scanf("%s \n",&b);
    scanf("%s \n",&c);
    int pa=pos(a),pb=pos(b),pc=pos(c),na,nb,nc;
    if (pa==-1) na=strtonum(a);
    if (pb==-1) nb=strtonum(b);
    if (pc==-1) nc=strtonum(c);
 
    int tmp,i;
    if (pa!=-1)
    {
        for (i=0; i<=9; i++)
        {
            a[pa]=i+48;
            tmp=strtonum(a);
            if (tmp+nb==nc)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    if (pb!=-1)
    {
        for (i=0; i<=9; i++)
        {
            b[pb]=i+48;
            tmp=strtonum(b);
            if (na+tmp==nc)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
 
    if (pc!=-1)
    {
        for (i=0; i<=9; i++)
        {
            c[pc]=i+48;
            tmp=strtonum(c);
            if (na+nb==tmp)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    return 0;
} 
