#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long LL ;
typedef unsigned long long ULL ;
const LL INF = 4e18;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
map<string, int> mp;
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	string str;
	int n,m,ans,money;
	cin >> n >> m;
	while(n--)
	{
		cin>> str >> money;
		mp[str] = money;
	}
	while(m--)
	{
		ans=0;
		while(cin >> str)
		{
			if(str == ".")break;
			ans += mp[str];
		}
		cout << ans << endl;
	}
	//-------------------------------------	-----------------------------------
}
