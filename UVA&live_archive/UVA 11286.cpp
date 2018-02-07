// UVa 11286.cpp
//Link:http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2261

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
	//writef;
	//fin = fopen("in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------
	map<string,int>m;
	char str[4];
	string arr[6],temp;
	int n,max,cnt;
	while(scanf("%d",&n) && n){
		max=cnt=0;
		while(n--){
			for(int i=0 ; i < 5 ; i++){
				scanf("%s",str);
				arr[i]=str;
			}
			sort(arr,arr+5);
			temp="";
			for(int i=0 ; i < 5 ;i++ )temp+=arr[i];
			m[temp]++;
			if(max<m[temp])max=m[temp],cnt=1;
			else if(max==m[temp])cnt++;
		}
		printf("%d\n",cnt*max);
		m.clear();
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
