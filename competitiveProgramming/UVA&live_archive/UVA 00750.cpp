//prob's solution for : 00750 UVa
//It's all about what U BELIEVE and LOVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y <= z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar
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
#define MAXSIZE 100000 + 1
//FILE *fin, *fout;
bool reaaaaaaaaaadf=false;
using namespace std;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
int ans[8],cnt=1,a,b;
bool valid(int c,int r){
	for(int pre=0 ; pre<c ;pre++){
		if(ans[pre]==r || abs(ans[pre]-r)==abs(pre-c))return 0;
	}
	return 1;
}
void solve(int c){
	if(c==8 && ans[b]==a){
		printf("%2d      %d",cnt++,ans[0]+1);
			for(int i=1 ; i < 8 ; i++)printf(" %d",ans[i]+1);
			puts("");
			return ;
	}
	for(int r=0 ; r < 8 ;r++){
		if(valid(c,r)){
			ans[c]=r;
			solve(c+1);
		}
	}
}
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//------------------------------------------------------------------------
	int t;
	scanf("%d",&t);
	wtm{
		clr(ans,0),cnt=1;
		scanf("%d%d",&a,&b);
		a--,b--;
		puts("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n");
		solve(0);
		if(t)puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
