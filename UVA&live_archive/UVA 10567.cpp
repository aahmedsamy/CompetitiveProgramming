// UVa 10567.cpp
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
vector<int>pos[55],v;
vector<int>::iterator it;
bool match;
int convert(char ch){
	if(ch>='a' && ch<='z')return 26+ch-'a';
	else return ch-'A';
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
	//------------------------------------------------------------------------vis
	char ch;
	int n=0,t;
	while(scanf("%c",&ch) && ch!='\n'){
		pos[convert(ch)].pb(n++);
	}
	n--;
	scanf("%d\n",&t);
	wtm{
		match=1;
		int start=-1,end=-1;
		while(scanf("%c",&ch)==1 && ch!='\n'){
			if(!match)continue;
			it = lower_bound(pos[convert(ch)].begin(),pos[convert(ch)].end(),end+1);
			if(it==pos[convert(ch)].end())match=0;
			if(start<0){
				start=*it;
				end=start;
			}else{
				end=*it;
			}
		}
		if(match){
			printf("Matched %d %d\n",start,end);
		}else puts("Not matched");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
