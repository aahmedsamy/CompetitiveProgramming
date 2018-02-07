#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
bool reaaaaaaaaaadf=0;
/*-----------------------------------------------*/
bool vis[26][26];
char grid[26][26];
int cnt;
void dfs(int x,int y)
{
	if(vis[x][y])return ;
	vis[x][y]=1;
	for(int i=0 ; i < 8 ; i++)
		if(grid[x][y]=='1')
			dfs(x+dx[i],y+dy[i]);
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
	int n,img=1;
	while(scanf("%d",&n)==1)
	{
		memset(vis,0,sizeof vis);
		cnt=0;
		for(int i=0 ; i < n ; i++)
		{
			gcu();
			for(int j=0 ; j < n ;j++)grid[i][j]=gcu();
		}
		for(int i=0 ; i < n ;i++)
			for(int j=0 ; j < n ; j++)
				if(!vis[i][j] && grid[i][j]=='1')dfs(i,j),cnt++;

		printf("Image number %d contains %d war eagles.\n",img++,cnt);
	}
	//-------------------------------------	-----------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
}
