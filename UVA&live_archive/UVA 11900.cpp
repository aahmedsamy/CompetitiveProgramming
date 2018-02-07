//UVA 11900.cpp
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
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t, n, p, q, egg, cnt,curW;
	cin >> t;
	for(int TC = 1 ; TC <= t ;TC++)
	{
		printf("Case %d: ",TC);

		cin >> n >> p >> q;
		cnt = curW = 0;
		for(int j = 0 ; j < n ; j++)
		{
			cin >> egg;
			if(curW + egg <= q && cnt < p)
			{
				cnt++;
				curW += egg;
			}
		}
		cout << cnt << endl;
	}
	//-------------------------------------	-----------------------------------
}
