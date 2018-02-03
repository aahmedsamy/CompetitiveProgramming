// UVa 10341.cpp
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
int p,q,r,s,t,u;
bool ok;
double f(double x){return p*exp(-x) + q * sin(x) + r*cos(x) + s*tan(x) +t * x * x + u;}
double bs(){
	int cnt=30;
	double lo=0,hi=1,ret=1;
	while(cnt--){
		ret=(lo+hi)/2;
		if(f(ret)>0){
			lo=ret;
		}else{
			hi=ret;
		}
	}
	return ret;
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	readf; reaaaaaaaaaadf=1;
	writef;
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------vis
	while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6){
		if(p+r+u<0|| f(1)>0){
			puts("No solution");
			continue;
		}
		printf("%.4f\n",bs());
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
