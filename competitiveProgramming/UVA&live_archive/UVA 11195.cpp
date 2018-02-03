// UVa 11195.cpp
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
bitset<20>rw,ld,rd;
int line,ans[9],a,b;
void backtrack(int c){
	if(c==8 && ans[b]==a){
		printf("%2d      %d",++line,ans[0]+1);
		for(int i=1 ; i < 8 ; i++)printf(" %d",ans[i]+1);
		puts("");
		return ;
	}
	for(int r=0 ; r < 8 ; r++){
		if(!ld[r-c+8-1] && !rd[r+c] && !rw[r]){
			ans[c]=r;
			ld[r-c+8-1]=rd[r+c]=rw[r]=true;
			backtrack(c+1);
			ld[r-c+8-1]=rd[r+c]=rw[r]=false;
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
	int t;
	scanf("%d\n",&t);
	wtm{
		line = 0;
		scanf("%d%d",&a,&b);a--,b--;
		puts("SOLN       COLUMN");
		puts(" #      1 2 3 4 5 6 7 8\n");
		backtrack(0);
		if(t)puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

