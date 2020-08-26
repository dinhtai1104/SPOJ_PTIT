#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> res;
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int i=0;
	for (i=0;i<s.length();i++)
	{
		int l=s[i]-'0';
		if(res.empty()) res.push_back(s[i]-'0');
		else if(l>res[res.size()-1] && k>0)
		{
			while(l>res[res.size()-1] && k!=0 && !res.empty())
			{
				res.pop_back();
				k--;
			}
			res.push_back(l);
		}
		else res.push_back(l);
	}
	if(k>0)
	{
		while(k>0)
		{
			res.pop_back();
			k--;
		}
	}
	for (i=0;i<res.size();i++) cout<<res[i];
	return 0;
} 
