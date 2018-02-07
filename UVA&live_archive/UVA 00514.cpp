// UVa fb2017_1.cpp
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
	readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
		int n;
		stack<int>st;
		int a[1002],b[1002];
		bool zero=0;
		while(scanf("%d",&n)){
			if(!n){
				puts("");
				break;
			}
			if(zero){
				puts("");
				zero=0;
			}
			for(int i=1 ; i <= n ;i++)a[i]=i;
			while(scanf("%d",&b[1])){
				if(!b[1]){
					zero=1;
					break;
				}
				for(int i=2 ; i <= n ;i++)scanf("%d",&b[i]);
				//cout<<b[1];
				bool flag=1;
				for(int i=1,j=1 ; i <= n ;i++){
					st.push(a[i]);
					while(st.size() && b[j]==st.top()){
						j++;
						st.pop();
					}
					if(i==n && st.size()){
						flag=0;
						puts("No");
					}
				}
				if(flag)puts("Yes");
				while(st.size())st.pop();
			}
		}
		//------------------------------------------------------------------------
	//if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
