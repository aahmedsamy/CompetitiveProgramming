// UVa 11222.cpp
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
#define writef freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/out" , "w" , stdout);
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
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//------------------------------------------------------------------------
	bool a[10000+1],b[10000+1],c[10000+1],vis[10000+1];
	int cnta,cntb,cntc,t,n,num,MAX,test=1;
	scanf("%d",&t);
	wtm{
		clr(a,0),clr(b,0),clr(c,0),clr(vis,0);
		printf("Case #%d:\n",test++);
		cnta=0,cntb=0,cntc=0,MAX;
		fo(0,i,3){
			scanf("%d",&n);
			while(n--){
				scanf("%d",&num);
				if(vis[num]){
					if(i && a[num])cnta--,a[num]=0;
					if(i!=1 && b[num])cntb--,b[num]=0;
					if(i!= 2 && c[num])cntc--,c[num]=0;
				}else{
					if(!i)a[num]=vis[num]=1,cnta++;
					else if(i==1)b[num]=vis[num]=1,cntb++;
					else c[num]=vis[num]=1,cntc++;
				}
			}
		}
		MAX=max(cnta,max(cntb,cntc));
		if(cnta==MAX){
			printf("1 %d",MAX);
			fo(0,i,10001)if(a[i])printf(" %d",i);
			puts("");
		}
		if(cntb==MAX){
			printf("2 %d",MAX);
			fo(0,i,10001)if(b[i])printf(" %d",i);
			puts("");
		}
		if(cntc==MAX){
			printf("3 %d",MAX);
			fo(0,i,10001)if(c[i])printf(" %d",i);
			puts("");
		}
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

