// UVa 00410.cpp
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

//////////////////////////////////////////////////
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
	//------------------------------------------------------------------------
	int c,s,arr[15],tcase=1;
	double sum,ans;
	while(scanf("%d%d",&c,&s)==2){
		printf("Set #%d\n",tcase++);
		clr(arr,0);
		sum=ans=0;
		for(int i=0 ; i < s ;i++)scanf("%d",&arr[i]),sum+=arr[i];
		sort(arr,arr+2*c);
		sum/=c;
		for(int i=0 ; i < c ;i++){
			printf(" %d:",i);
			if(arr[i])printf(" %d",arr[i]);
			if(arr[2*c-i-1])printf(" %d",arr[2*c-i-1]);
			puts("");
			ans+=abs(sum-(arr[i]+arr[2*c-i-1]));
		}
		printf("IMBALANCE = %.5lf\n",ans);
		puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
