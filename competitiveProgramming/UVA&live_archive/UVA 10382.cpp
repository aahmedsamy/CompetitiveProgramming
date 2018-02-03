// UVa 10382.cpp
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

int n,idx;
double l,w;

struct dd{
	double l,r;
	friend bool operator < (const dd &b, const dd &a)
	{
		return b.l<a.l;
	}
}data[10005];
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

	while(scanf("%d%lf%lf",&n,&l,&w)==3)
	{
		idx=0;
		for(int i=0 ; i < n ; i++)
		{
			double  c,r;
			scanf("%lf%lf",&c,&r);

			if(r<=w/2)continue;

			double dx=sqrt(r*r-w*w/4.0);

			data[idx].l=c-dx,data[idx].r=c+dx;
			idx++;
		}

		sort(data,data+idx);

		double left=0,right=0;
		int cnt=0;
		bool ok=0;

		if(data[0].l<=0)
		{
			for(int i=0 ; i<idx;)
			{
				int j=i;
				while(j<idx &&  data[j].l <=left)
				{
					if(data[j].r>right)
					{
						right=data[j].r;
					}
					j++;
				}
				if(i==j)break;
				cnt++;
				i=j;
				left=right;
				if(left>=l)
				{
					ok=1;
					break;
				}
			}
		}
		if(ok)printf("%d\n",cnt);
		else puts("-1");
	}


	//-------------------------------------	-----------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
