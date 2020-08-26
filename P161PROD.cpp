#include <iostream>
using namespace std;
 
char c;
string s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./",s;
 
void input(){
	cin>>c>>s;
}
 
int Index(int i){
	if(c == 'L'){
		return (i == 9)?0:(i+1);
	}else if(c == 'R'){
		return (i == 0)?9:(i-1);
	}
}
 
void process(){
	int n = s.length();
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 10;j++){
			if(s[i] == s1[j]){
				s[i] = s1[Index(j)];break;
			}
			if(s[i] == s2[j]){
				s[i] = s2[Index(j)];break;
			}
			if(s[i] == s3[j]){
				s[i] = s3[Index(j)];break;
			}
		}
	}
	cout<<s;
}
 
int main(){
	input();
	process();
}
//accepted 
 
