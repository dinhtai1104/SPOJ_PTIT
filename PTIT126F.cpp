#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    string step;
    cin>>step;
    int stepMax=0;
    int L=0, R=0;
    int Lm=0, Rm=0;
    for (int i=0; i<step.length(); i++)
    {
        if (step[i]=='L')
        {
            L++;
            Lm++;
            if (Lm-R>stepMax) stepMax=Lm-R; 
        }
        else if (step[i]=='R')
        {
            R++;
            Rm++;
            if (Rm-L>stepMax) stepMax=Rm-L;
        }
        else
        {
            Lm++;
            if (Lm-R>stepMax) stepMax=Lm-R; 
            Rm++;
            if (Rm-L>stepMax) stepMax=Rm-L;
        }
    }
    cout<<stepMax;
    return 0;
} 
