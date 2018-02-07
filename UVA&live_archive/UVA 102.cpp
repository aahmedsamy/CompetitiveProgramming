// UVa 102.cpp
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
	int b[3],c[3],g[3];
	while(scanf("%d%d%d%d%d%d%d%d%d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])==9){
		int sum=0 , mov=1<<30,temp;;
		char cur[]="BCG",ans[]="BCG";
		for(int i=0 ; i < 3 ; i++)sum+=b[i]+c[i]+g[i];
		temp=sum-b[0]-c[1]-g[2];
		mov=min(mov,temp);
		while(next_permutation(cur,cur+3)){
			temp=0;
			if(cur[0]=='B')temp+=b[0];
			else if('B'==cur[1])temp+=b[1];
			else if('B'==cur[2])temp+=b[2];
			if('C'==cur[0])temp+=c[0];
			else if('C'==cur[1])temp+=c[1];
			else if('C'==cur[2])temp+=c[2];
			if('G'==cur[0])temp+=g[0];
			else if('G'==cur[1])temp+=g[1];
			else if('G'==cur[2])temp+=g[2];
			temp=sum-temp;
			if(mov>temp){
				mov=temp;
				strcpy(ans,cur);
			}
		}
		printf("%s %d\n",ans,mov);
		//
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

