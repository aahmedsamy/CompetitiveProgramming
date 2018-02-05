// UVa 574.cpp
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
int arr[15],n,t;
vector<int>v;
map<vector<int>,bool>test;
vector<int>::iterator it;
int last;
bool NONE;
/*-----------------------------------------------*/

void solve(int sum,int idx){
	if(sum==t){
		if(test[v])return;
		test[v]=1;
		it=v.begin();
		printf("%d",*it++);
		while(it!=v.end()){printf("+%d",*it++);};
		puts("");
		NONE=0;
		return;
	}
	for(int i=idx ; i<n ; i++){
		if(sum+arr[i]<=t){
			v.pb(arr[i]);
			solve(sum+arr[i],i+1);
			v.pop_back();
		}
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
	while(scanf("%d%d",&t,&n)==2 && t && n){
		printf("Sums of %d:\n",t);
		for(int i=0 ; i < n ; i++)scanf("%d",&arr[i]);
		NONE=1;
		solve(0,0);
		test.clear();
		if(NONE)puts("NONE");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
