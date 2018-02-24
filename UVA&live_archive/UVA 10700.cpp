//UVA 10700.cpp
#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long LL ;
typedef unsigned long long ULL ;
const LL INFLL = 4e18;
const int INFINT = 2e9;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
int SIZE = 1e5;
/*-----------------------------------------------*/
ULL f(string str, char op)
{
	vector<ULL>v;
	ULL ret, num = 0, pre = 0;
	if(op == '*')pre = 1;
	bool flag = 0;
	for(int i = 0 ; i < str.size() ;i++)
	{
		while(isdigit(str[i]))
		{
			num *= 10;
			num += str[i++] - '0';
		}
		if(op == str[i] && op == '*')
		{
			pre *= num;
			num = 0;
		}
		else if(op == str[i] && op == '+')
		{
			pre += num;
			num = 0;
		}
		else
		{
			if(op == '*')
			{
				v.push_back(pre * num);
				num = 0;
				pre = 1;
			}
			else
			{
				v.push_back(pre + num);
				num = pre = 0;
			}
		}
	}
	ret = pre;
	if(op == '+')ret = max((ULL)1, ret);
	vector<ULL> ::iterator it = v.begin();
	while(it != v.end())
	{
		if(op == '*')ret += *it++;
		else ret *= *it++;
	}
	return ret;
}
/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> str;
		cout << "The maximum and minimum are " << f(str, '+');
		cout << " and " << f(str,'*') - 1<<".\n";
	}

	//------------------------------------------------------------------------
}
