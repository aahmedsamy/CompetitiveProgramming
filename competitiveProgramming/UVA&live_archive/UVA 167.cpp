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
int score,a,b,board[9][9];
void backtrack(int c,int cur){
	if( c == 8 ){
		score=max(score,cur);
		return ;
	}
	for(int r=0 ; r < 8 ; r++){
		if(!ld[r-c+8-1] && !rd[r+c] && !rw[r]){
			cur+=board[r][c];
			ld[r-c+8-1]=rd[r+c]=rw[r]=true;
			backtrack(c+1,cur);
			cur-=board[r][c];
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
		score=0;
		for(int i=0 ; i < 8 ; i++)
			for(int j=0 ; j < 8 ; j++)scanf("%d",&board[i][j]);
		backtrack(0,0);
		printf("%5d\n",score);
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

