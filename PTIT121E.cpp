#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    /*
        C:12
        H:1
        O:16
    */
   stack<int>M;
   int st=0;
   //s = "("+s+")";
   for(int i=0;i<s.length();i++){
       if(s[i]=='('){
           M.push(0);
        //    while(!M.empty()){
        //        st+=M.top();M.pop();
        //    }
       }
       if (s[i]=='C'){
           M.push(12);
       }
       if (s[i]=='H'){
           M.push(1);
       }
       if (s[i]=='O'){
           M.push(16);
       }
       if (s[i]>='1'&&s[i]<='9'){
           int a = M.top();M.pop();
           M.push(a*(s[i]-'0'));
       }
       if(s[i]==')'){
           int tmp=0;
           while(!M.empty() && M.top() != 0){
               tmp+=M.top();M.pop();
           }
           M.pop();
           M.push(tmp);
       }
   }
   while(!M.empty()) {
       st+=M.top();
       M.pop();
   }
   cout<<st;
}  
