#include<bits/stdc++.h>
using namespace std;
typedef long long Long;
int uT( char c )
{ // tra ve muc do uu tien cua cac toan tu
	if( c == '(') return 0;
	if( c == '+' || c == '-' ) return 1;
	if( c == '*' || c == '/' || c == '%' ) return 2;
	if( c == '^' ) return 3;
}
Long chartonum(char a[])
{
	Long s = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		s = s*10 + (a[i] - '0');
	}
	return s;
}
void chen(char a[], char x)
{
	int p = strlen(a);
	a[p] = x; a[p + 1] = '\0';
}
//char kq[1000] = "";
void hauTo(char kq[] ,char str[])
{ // chuyen bthuc trung to sang hau to.
	stack<char> s;
	char str1[1000] = "";
	int i = 0;
	while( i < strlen(str))
	{
		char c = str[i];
		if( c != ' ' )
		{
			if( c - '0' >= 0 && c - '0' <= 9 || isalpha(c) ) chen(kq, c);
			else
			{
				strcat(kq, str1); chen(kq, ' ');
				strcpy(str1, "");
				if( c == '(') s.push(c);
				else
				{
					if( c == ')') 
					{
						while( s.top() != '(')
						{
							chen(kq, s.top()); chen(kq, ' ');
							s.pop();
						}
						if(s.top() == '(' ) s.pop();
					}
					else
					{
						while( !s.empty() && uT(c) <= uT(s.top()))
						{
							chen(kq, s.top()); chen(kq, ' ');
							s.pop();
						}
						s.push(c);
					}
				}
			}
		}
		i++;
	}
	if( str1 != "" ) strcat(kq, str1), chen(kq, ' ');
	while(!s.empty())
	{
		if(s.top()!= '(') chen(kq, s.top()), chen(kq, ' ');
		s.pop();
	}
//	cout << kq << endl;
}
void tinhtoan(char a[])
{
	stack<Long> heap;
	char *p = strtok(a, " ");
	while(p != NULL)
	{
		if (strcmp(p, "+") == 0)
		{
			Long x = heap.top(); heap.pop();
			Long y = heap.top(); heap.pop();
			heap.push(x + y);
		}
		else if (strcmp(p, "-") == 0)
		{
			Long x = heap.top(); heap.pop();
			Long y = heap.top(); heap.pop();
			heap.push( - x + y);
		}
		else if (strcmp(p, "*") == 0)
		{
			Long x = heap.top(); heap.pop();
			Long y = heap.top(); heap.pop();
			heap.push(x * y);
		}
		else if (strcmp(p, "/") == 0)
		{
			Long x = heap.top(); heap.pop();
			Long y = heap.top(); heap.pop();
			heap.push(y / x);
		}
		else
		{
			Long x = chartonum(p);
			heap.push(x);
		}
		p = strtok(NULL, " ");
	}
	//heap.pop();
	cout << heap.top();
}
int main()
{
	int test;
	cin >> test;
	cin.ignore();	
	char s[1000];
	while(test--)
	{
		char kq[1000] = "";
		cin >> s;
		hauTo(kq, s);
		tinhtoan(kq);
		cout << '\n';
	}
	return 0;
}
 
 
