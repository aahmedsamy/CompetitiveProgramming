//prob's solution for : 01237 UVa
//It's all about what U BELIEVE and LOVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y <= z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar
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
#define MAXSIZE 100000 + 1
//FILE *fin, *fout;
bool reaaaaaaaaaadf=false;
using namespace std;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
struct s{
	string name;
	int h,l;
}data[10000+1];
int p;
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//-----------------------------------------------------------------------
	int t,d,q,cnt;
	string ans;
	scanf("%d",&t);
	wtm{
		scanf("%d",&d);
		for(int i=0 ; i < d ;i++){
			cin>>data[i].name;
			scanf("%d%d",&data[i].l,&data[i].h);
		}
		scanf("%d",&q);
		while(q--){
			cnt=0;
			scanf("%d",&p);
			for(int i=0 ; i < d && cnt<2 ;i++){
				if(p>=data[i].l && p<=data[i].h)cnt++,ans=data[i].name;
			}
			if(cnt==1)puts(ans.c_str());
			else puts("UNDETERMINED");
		}
		if(t)puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
