// UVa 541.cpp
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
	int n,sumc[100],sumr[100];
	string ans;
	bool arr[101][101];
	while(scanf("%d",&n)&&n){
		clr(sumc,0),clr(sumr,0);
		ans="Change bit ";
		fo(0,i,n)
			fo(0,j,n){
				scanf("%d",&arr[i][j]);
				sumc[i]+=arr[i][j];
				sumr[j]+=arr[i][j];
			}
		int cnti=0,cntj=0,x,y;
		fo(0,i,n){
			if(sumr[i]&1)cnti++,y=i+1;
			if(sumc[i]&1)cntj++,x=i+1;
			if(cnti+cntj>2)break;
		}
		if(!(cnti+cntj))puts("OK");
		else if(cnti==1 && cntj==1)printf("Change bit (%d,%d)\n",x,y);
		else puts("Corrupt");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

