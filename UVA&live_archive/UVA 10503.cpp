// UVa 10503.cpp
/*
ID:ahmeds1
PROG:milk3
LANG:C++
*/
//It's all about what U BELIEVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y < z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar_unlocked

#define modulo 1000000007
#define wtm while(t--)
#define wnm while(n--)
#define non if(!n)break;
#define lsone(Z) (Z&-Z)
#define clr(arr,val) memset(arr,val,sizeof arr)
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
using namespace std;
typedef vector<int> vi;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
//FILE *fin, *fout;
using namespace std;
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////
int n,m;
pair<int,int>f,l,p[20];
bool vis[20],yes;

/*-----------------------------------------------*/

void solve(int pre,int cnt){
	if(yes)return;
	if(cnt==m){
		if(pre==l.first){
			puts("YES"),yes=1;
			return ;
		}
	}
	for(int i=0 ; i < n ; i++){
		if(vis[i])continue;
		vis[i]=true;
		if(pre==p[i].first) solve(p[i].second,cnt+1);
		if(pre==p[i].second) solve(p[i].first,cnt+1);
		vis[i]=false;
	}
}

/*--------------MAIN FUNCTION--------------------*/
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	while(scanf("%d%d",&m,&n) && m){
		scanf("%d%d%d%d",&f.first,&f.second,&l.first,&l.second);
		for(int i=0 ; i<n ; i++ )scanf("%d%d",&p[i].first,&p[i].second);
		yes=0;
		solve(f.second,0);
		if(!yes)puts("NO");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
