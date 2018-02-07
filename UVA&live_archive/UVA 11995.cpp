// UVa 10954.cpp
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
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//------------------------------------------------------------------------
	int n,a,x;
	bool s,q,p;
	while(scanf("%d",&n)==1){
		s=1,q=1,p=1;
		stack<int>st;
		queue<int>qu;
		priority_queue<int>pq;
		while(n--){
			scanf("%d%d",&a,&x);
			if(a==1){
				st.push(x);
				qu.push(x);
				pq.push(x);
			}else{
				if(st.empty() || st.top()!=x)s=0;
				else st.pop();
				if(qu.empty() || qu.front()!=x)q=0;
				else qu.pop();
				if(pq.empty() || pq.top()!=x)p=0;
				else pq.pop() ;
			}
		}
		if(s+q+p>=2)puts("not sure");
		else if(!(s+q+p))puts("impossible");
		else if(s)puts("stack");
		else if(q)puts("queue");
		else puts("priority queue");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
