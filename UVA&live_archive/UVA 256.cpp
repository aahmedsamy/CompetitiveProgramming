// UVa 256.cpp
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
	int n,a,b,lmt,num,zero;
	while(scanf("%d",&n)==1){
		if(n==2)lmt=9;
		else if(n==4)lmt=99;
		else if(n==6)lmt=999;
		else lmt=9999;
		a=b=0;
		if(n==2)zero=10;else if(n==4)zero=100;else if(n==6)zero=1000; else zero=10000;
		for( ; a<=lmt ; a++)
			for(b=0 ;b<=lmt ;b++ ){
				num=a*zero+b;
				if(pow(a+b,2)==num){
					char ans[10];
					sprintf(ans,"%d\n",num);
					int sz=strlen(ans);
					for(int i=0 ; sz+i<n+1 ;i++)putchar('0');
					printf("%s",ans);
				}
		}
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

