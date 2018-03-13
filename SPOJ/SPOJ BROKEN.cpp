//SPOJ BROKEN.cpp
#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long ll ;
typedef unsigned long long ull ;
const ll infll = 4e18;
const int infint = 2e9;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
int SIZE = 1e5;
/*--------------------------------------------------*/
map<char, int> mp;
/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	//writef//
	#endif
	int m;
	string str;
	while(cin >> m && m)
	{
		mp.clear();
		getline(cin,str);
		getline(cin,str);

		int s = 0, e = 0, len = str.size(), ans = 0, cnt = 0;
		while(e < len)
		{
			if(!mp[str[e]]++)cnt++;
			while(cnt <= m && e < len)
			{
				ans = max(ans, e - s + 1);
				e++;
				if(!mp[str[e]]++)cnt++;
			}
			if(mp[str[s++]]-- == 1)cnt--;
			e++;
		}
		if(!mp[str[e]]++)cnt++;
		if(cnt <= m)ans = max(ans, e - s);
		cout << ans << endl;
	}
	//------------------------------------------------------------------------
}
