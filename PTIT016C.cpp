 
#include <stdio.h>
#include <iostream>
#include <cstring>
 
using namespace std;
char s[200];
long n;
 
bool check(char s[])
{
    long i;
    for (i = 0; i < (long)strlen(s); i++)
        if (((i % 2 == 0) && ((s[i] - 48) % 2 == 0)) || ( (i % 2 == 1) && ((s[i] - 48) % 2 == 1)  ) )
            return (false);
    return (true);
}
 
int main()
{
    cin >> n;
    long i;
    for (i = 1; i <= n; i++)
    {
        cin >> s;
        cout << (check(s) ? "YES" : "NO") << endl;
    }
    return 0;
} 
