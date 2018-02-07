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
bool grid[500][500];
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int ans = 0, a, b , c, d, w, h, m;
	while(cin >> w >> h >> m )
	{
		memset(grid, 0, sizeof grid);
		ans=0;
		if(!w && !h && !m)break;
		for(int i=0 ; i < m ; i++)
		{
			cin >> a >> b >> c >> d;
			if(a > c) swap(a, c);
			if(b > d) swap(b, d);
			a--, b--, c--, d--;
			for(int i = a; i <= c ;i++)
				for(int j = b ; j <= d ; j++ )
					grid[i][j]=1;
		}
		for(int i = 0 ; i < w ; i++)
				for( int j = 0; j < h ;j++)
					if(!grid[i][j])ans++;
			if(!ans)puts("There is no empty spots.");
			else if(ans == 1)puts("There is one empty spot.");
			else printf("There are %d empty spots.\n",ans);
	}
	//-------------------------------------	-----------------------------------
}
