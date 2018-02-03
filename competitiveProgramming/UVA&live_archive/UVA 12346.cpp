#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
int hour,volume,n,v[100],c[100],ans=1<<30,t;
void backtrack(int i,int curVolume,int cost)
{
	if(curVolume>=volume)
	{
		ans=min(ans,cost);
		return ;
	}
	if(i==n)return ;
	backtrack(i+1,curVolume,cost);
	backtrack(i+1,curVolume+hour*v[i],cost+c[i]);
}

/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	cin>>n;
	for(int i=0 ; i < n ;i++)
	{
		cin>>v[i]>>c[i];
	}
	cin>>t;
	int TC=1;
	while(t--)
	{
		printf("Case %d: ",TC++);
		ans=1<<30;
		cin>>volume>>hour;
		backtrack(0,0,0);
		if(ans==1<<30)puts("IMPOSSIBLE");
		else printf("%d\n",ans);
	}
	//-------------------------------------	-----------------------------------
}
