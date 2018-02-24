//SPOJ UPDATEIT.cpp
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

/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	int t, arr[10000], n, u, q, l, r, val, idx;
	cin >> t;
	while(t--)
	{
		cin >> n >> u;
		memset(arr, 0,  sizeof arr);
		while(u--)
		{
			cin >> l >> r >> val;
			arr[l] += val, arr[r + 1] -= val;
		}
		for(int i = 1 ; i < n ; i++)arr[i] += arr[i - 1];
		cin >> q;
		while(q--)
		{
			cin >> idx;
			cout << arr[idx] << endl;
		}
	}
	//------------------------------------------------------------------------
}
