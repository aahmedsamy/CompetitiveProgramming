//prob's solution for : 00793 UVa
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
//FILE *fin, *fout;
bool reaaaaaaaaaadf=false;
using namespace std;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
int  p[1000],r[1000],curSize[1000];
int findSet(int a){
	return p[a]=p[a]==a?a:findSet(p[a]);
}
void makeSet(int a,int b){
	a=findSet(a),b=findSet(b);
	if(a!=b){
		if(r[a]==r[b]){
			p[b]=a;
			r[a]++;
			curSize[a]+=curSize[b];
		}else{
			if(r[a]<r[b]){
				p[a]=b;
				curSize[b]+=curSize[a];
			}else{
				p[b]=a;
				curSize[a]+=curSize[b];
			}
		}
	}
}
void assignSets(int n){
	curSize[0]=1;
	for(int i=1 ; i <= n ; i++)
		p[i]=i,r[i]=0,curSize[i]=1;
}
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//------------------------------------------------------------------------
	int t,n,a,b,x,y;
	string str;
	char ch;
	scanf("%d",&t);
	wtm{
		x=0,y=0;
		scanf("%d\n",&n);
		assignSets(n);
		while(1){
			if(!getline(cin,str)||str.empty())break;;
			sscanf(str.c_str(),"%c %d %d",&ch,&a,&b);
			if(ch=='c')
				makeSet(a,b);
			else{
				if(findSet(a)==findSet(b))x++;
				else y++;
			}
		}
		printf("%d,%d\n",x,y);
		if(t)puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
