// UVa 11450.cpp Buttom-Up in linear DP table version
/*
ID:ahmeds1
PROG:milk3
LANG:C++
*/
//It's all about what U BELIEVE
#include<bits/stdc++.h>
#define endl '\n'
#define PI 3.14159
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
	#ifndef ONLINE_JUDGE
	readf;
	writef;
	#endif
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	int t;
	scanf("%d",&t);
	wtm
	{
		int money,c,price[25][25];
		int dp[250]={0};

		scanf("%d%d",&money,&c);

		for(int i=0 ; i < c ; i++)
		{
			scanf("%d",&price[i][0]);

			for(int j=1 ; j <= price[i][0] ; j++)
			{
				scanf("%d",&price[i][j]);
			}
		}

		//Bottom-up
		int level=1;

		for(int i=1 ; i <= price[0][0] ; i++)
		{
			if(money-price[0][i]>=0)
			{
				dp[money-price[0][i]]=level;
			}
		}

		for(int i=1 ; i < c ; i++)
		{
			level++;
			for(int m=0 ;  m < money ; m++)
			{
				if(dp[m]==level-1)
				{
					for(int j=1 ; j <= price[i][0] ; j++)
					{
						if(m-price[i][j]>=0)
						{
							dp[m-price[i][j]]=level;
						}
					}
				}
			}
		}
		int m;
		for( m=0 ; m <= money && dp[m]!=level ; m++);

		if(m-1==money)puts("no solution");
		else printf("%d\n",money-m);
	}
	//-------------------------------------	-----------------------------------
	return 0;
}
