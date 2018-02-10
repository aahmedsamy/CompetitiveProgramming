//UVA 10714.cpp
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
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t, mn, mx, num, len, n;
	cin >> t;
	while(t--)
	{
		cin >> len >> n;
		mn = 1 << 0 , mx = 0 ;
		while(n--)
		{
			cin >> num;
			mn = max(mn, min(num, len - num));
			mx = max(mx, max(num, len - num));
		}
		cout << mn << " " << mx << endl;
	}
	//-------------------------------------	-----------------------------------
}
