// UVa 524.cpp
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
int n,arr[18],idx;
bool prime[50],vis[18];
void circle(int idx){
	if(idx == n ){
		if(!prime[arr[idx-1]+1])return;
		printf("1");
		for(int i=1 ; i < n ; i++)printf(" %d",arr[i]);
		puts("");
		return;
	}
	for(int i=2 ; i <= n ; i++){
		if(vis[i])
			continue;
		if(prime[arr[idx-1]+i]){
			arr[idx]=i;
			vis[i]=1;
			circle(idx+1);
			vis[i]=0;
		}
	}
}
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
	int tc=1;
	while(scanf("%d",&n)==1){
		if(tc>1)puts("");
		arr[0]=arr[n]=1,idx=1,prime[2]=1,prime[3]=1,prime[5]=1,prime[7]=1,prime[11]=1,prime[13]=1;
		prime[17]=1,prime[19]=1,prime[23]=1,prime[29]=1,prime[31]=1;
		printf("Case %d:\n",tc++);
		circle(1);
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
