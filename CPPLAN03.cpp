#include<iostream>
#include<vector>
using namespace std;
struct big {
	vector<int> a;
	big() {
		a.push_back(0);
	}
	friend istream &operator >> (istream &out, big &a) {
		string x;
		out >> x;
		//a.a.resize(x.length(), 0);
		a.a.assign(x.size(),0);
        for(int i=0;i<x.size();i++) a.a[i] =x[x.size()-1-i]-'0';
		return out;
	}
	friend ostream &operator << (ostream &out, big b) {
		for (int i = b.a.size() - 1; i >= 0; i--) {
			out << b.a[i];
		}
		return out;
	}
	int getSize() {
		return a.size();
	}
	void fix() {
		a.push_back(0);
        a.push_back(0);
        for(int i=0;i<a.size()-1;i++)
        {
            a[i+1]+=a[i]/10;
            a[i]%=10;
            if(a[i]<0)
            {
                a[i]+=10;
                a[i+1]-=1;
            }
        }
        while(a.size()>1&&a.back()==0)a.pop_back();
	}
	friend big operator * (big a, big b) {
		big c;
		c.a.assign(a.getSize() * b.getSize(), 0);
		for (int i = 0; i < a.getSize(); i++) {
			for (int j = 0; j < b.getSize(); j++) {
				c.a[i + j] += a.a[i] * b.a[j];
			}
		} 
		c.fix();
		return c;
	}
};
int main(){
	int t;
	cin >> t;
	while(t--) {
		big a, b;
		cin >> a >> b;
		cout << a*b;
		cout << endl;
	}	
	return 0;
}
 
