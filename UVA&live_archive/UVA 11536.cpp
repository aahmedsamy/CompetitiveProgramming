/*
Problem : UVA 11536.cpp
Time         : 5.120 
*/
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
/*-----------------------------------------------*/
vector<ULL>v(1e6 + 1);
map<ULL, ULL>vis;
ULL t, n, m, k, b, ans;
void minimize()
{
	while((vis[v[b]] > 1 && v[b] <= k) || v[b] > k)
	{
		vis[v[b++]]--;
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	cin >> t;
	for(ULL i = 1 ; i < t + 1 ; i++)
	{
		vis.clear();
		ans = INFINT, b = 1;
		cout <<"Case " << i <<": ";
		cin >> n >> m >> k;
		ULL cnt = k;
		v[1] = 1, v[2] = 2, v[3] = 3;
		for(ULL i = 4 ; i <= n ; i++)
		{
			v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % m +1;
		}

		for(ULL i = 1 ; i <= n ;i++)
		{
			vis[v[i]]++;
			if(v[i] <= k && vis[v[i]] == 1)cnt--;
			if(!cnt)
			{
				minimize();
				ans = min(ans, i - b);
			}
		}
		if(ans == INFINT)cout << "sequence nai\n";
		else cout << ans + 1 << endl;
	}
	//-------------------------------------	-----------------------------------
}
