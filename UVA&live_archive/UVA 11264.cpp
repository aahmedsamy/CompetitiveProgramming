// UVa 11264.cpp
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
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	int t,n,arr[1000];
	unsigned long long sum;
	set<int> st;
	scanf("%d",&t);
	wtm
	{
		sum=0;st.clear();
		scanf("%d",&n);

		for(int i=0 ; i < n ; i++)scanf("%d",&arr[i]);

		sort(arr,arr+n);
		for(int i=0 ; i < n ; i++)
		{
			if(i==n-1 || sum+arr[i]<arr[i+1])
			{
				sum+=arr[i],st.insert(arr[i]);
			}
		}
		printf("%d\n",(int)st.size());
	}
	//-------------------------------------	-----------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
