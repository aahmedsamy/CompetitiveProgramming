//UVA 11991.cpp
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
map<int,int> cnt;
map<int,vector<int> >idx;
/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int n, m, num, k, v;
	while(cin >> n >> m)
	{
		idx.clear();
		cnt.clear();
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> num;
			cnt[num]++;
			idx[num].push_back(i);
		}
		while(m--)
		{
			cin >> k >> v;
			if(cnt[v] >= k)
			{
				cout << idx[v][k - 1];
			}
			else cout << 0;
			cout << endl;
		}
	}

	//------------------------------------------------------------------------
}
