//Spoj MAIN8_C.cpp - Shake Shake Shaky
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
LL n, m;
vector<LL>v(50000);
bool check(LL can)
{
	LL student = m;
	for(LL i = 0 ; i < n ; i++)
	{
		student -= (v[i] / can);
		if(student <= 0)return true;
	}
	return false;
}
/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	LL t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(LL i = 0 ; i < n ; i++)
			cin >> v[i];

		LL lo = 1, hi = 1e9, ans = 0;

		while(lo <= hi)
		{
			LL mid = (lo + hi) >> 1;
			if(check(mid))
				lo = (ans = mid) + 1;
			else
				hi = mid - 1;
		}

		cout << ans << endl;
	}
	//------------------------------------------------------------------------
}
