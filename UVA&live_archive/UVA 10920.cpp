// UVa 10920.cpp
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
#define PI 3.14159265
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
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////

int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	int n,p,l,c,step;
	while(scanf("%d%d",&n,&p)==2 && n){
		int num=1;
		c=n/2+1;
		bool flag=1;
		while(pow(num,2)<p)num+=2,c++;
		l=c;
		step=num-1;
		num=pow(num,2);
		if(flag){
			for(int i=0 ; i < step ; i++){
				if(num==p){
					flag=0;
					break;
				}
				l--,num--;
			}
		}
		if(flag){
			for(int i=0 ; i < step ;i++){
				if(num==p){
					flag=0;
					break;
				}
				c--,num--;
			}
		}
		if(flag){
			for(int i=0 ; i < step ;i++){
				if(num==p){
					flag=0;
					break;
				}
				l++,num--;
			}
		}
		if(flag){
			for(int i=0 ; i < step ;i++){
				if(num==p){
					flag=0;
					break;
				}
				c++,num--;
			}
		}
		printf("Line = %d, column = %d.\n",l,c);
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
