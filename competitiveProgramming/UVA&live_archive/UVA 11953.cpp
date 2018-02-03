#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
bool reaaaaaaaaaadf=0;
/*-----------------------------------------------*/
char grid[111][111];
bool vis[111][111];
int cnt,n;
void dfs(int x, int y)
{
	if(grid[x][y]=='.' || vis[x][y] || x<0 || y<0 || x==n || y==n)return ;
	vis[x][y]=1;
	for(int i=0 ; i < 4 ; i++)dfs(x+dx[i],y+dy[i]);

}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	int t,TC=1;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof vis);
		cin>>n;
		cnt=0;
		for(int i=0 ; i < n ; i++)
		{
			gcu();
			for(int j=0 ; j < n ; j++)
				grid[i][j]=gcu();
		}
		for(int i=0 ; i < n ; i++)
			for(int j=0 ; j < n ; j++)
				if(!vis[i][j]&&grid[i][j]=='x')dfs(i,j),cnt++;
		printf("Case %d: %d\n",TC++,cnt);
	}
	//-------------------------------------	-----------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
}
