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
int killed[1025][1025], d;
void updateKilled(int x, int y, int p)
{
	int limitx = min(x + d, 1023);
	int limity = min(y + d, 1023);
	for(int i = max(0, x - d) ; i <= limitx ;i++)
	{
		for(int j = max(0, y - d) ; j <= limity ;j++)
			killed[i][j] += p;
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t, n, x, y, p;
	scanf("%d", &t);
	while(t--)
	{
		memset(killed, 0, sizeof killed);
		scanf("%d", &d);
		scanf("%d", &n);
		for(int i=0 ; i < n ;i++)
		{
			scanf("%d%d%d", &x, &y, &p);
			updateKilled(x, y, p);
		}
		int ans = -1;
		for(int i = 0 ; i <= 1024 ; i++)
			for(int j = 0 ; j <= 1024 ; j++)
			{
				if(ans < killed[i][j])
				{
					ans = killed[i][j];
					x = i;
					y = j;
				}
			}
		printf("%d %d %d\n", x, y, ans);
	}
	//-------------------------------------	-----------------------------------
}
