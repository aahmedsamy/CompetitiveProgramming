// UVa 624.cpp
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
vector<int> answer;
int tabes[30];
int mxlen,n,best;
//////////////////////////////////////////////////
void backtrack(vector<int>curtabes,int sum , int idx){
	sum+=tabes[idx];
	curtabes.pb(tabes[idx]);
	if(sum>best || (sum==best && curtabes.size()>answer.size())){
		best=sum;
		answer=curtabes;
	}
	for(int i=idx+1 ; i < n ; i++){
		if(sum+tabes[i]<=mxlen)backtrack(curtabes,sum,i);
	}
}
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
	while(scanf("%d",&mxlen)==1){
		scanf("%d",&n);
		for(int i=0 ; i < n ; i++){
			scanf("%d",&tabes[i]);
		}
		for(int i=0 ;i<n;i++){
			vector<int>curtabes;
			if(tabes[i]<=mxlen)backtrack(curtabes,0,i);
		}
		vector<int>:: iterator it=answer.begin();
		while(it!=answer.end())printf("%d ",*it++);
		printf("sum:%d\n",best);
		answer.clear();best=0;
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

