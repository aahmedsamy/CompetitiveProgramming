// UVa 193.cpp
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

vector<vector<int> > adlst;
vector<int>temp,ans;
vector<int>::iterator it;
bool lst[105][105];
int vis[105];
int t,m,n;

void solve(int node){
	if(node==n){
		if(temp.size()>ans.size())ans=temp;
		return;
	}
	if(vis[node]){
		solve(node+1);
		return ;
	}
	temp.pb(node);
	vis[node]++;
	for(int i=0 ; i < n ; i++)if(lst[node][i])vis[i]++;
	solve(node+1);
	vis[node]--;
	temp.pop_back();
	for(int i=0 ; i < n ; i++)if(lst[node][i])vis[i]--;
	solve(node+1);
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
	int a,b;
	scanf("%d",&t);
	wtm{
		scanf("%d%d",&n,&m);
		for(int i=0 ; i < m ; i++){
			scanf("%d%d",&a,&b);
			a--,b--;
			lst[a][b]=1;
			lst[b][a]=1;
		}
		solve(0);
		printf("%d\n",(int)ans.size());
		it=ans.begin();
		printf("%d",*it++ +1);
		while(it!=ans.end())printf(" %d",*it++ +1);
		puts("");
		adlst.clear(),ans.clear(),temp.clear();
		clr(vis,0);
		clr(lst,0);
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
