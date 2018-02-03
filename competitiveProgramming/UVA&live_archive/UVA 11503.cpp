//prob's solution for : 11503 UVa
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
int p[2*100000+1],r[2*100000+1],setSize[2*100000+1];
map<string,int> m;
void assign(int n){
	for(int i=0 ; i <= n ;i++)
		p[i]=i,r[i]=0,setSize[i]=1;
}
int findParent(int a){
	return p[a]=p[a]==a?a:findParent(p[a]);
}
void makeSet(int a, int b){
	a=findParent(a),b=findParent(b);
	if(a!=b){
		if(r[a]>=r[b]){
			r[a]==r[b]?p[b]=a,r[a]++:p[b]=a;
			setSize[a]+=setSize[b];
		}else
			p[a]=b,setSize[b]+=setSize[a];
	}
}
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//------------------------------------------------------------------------
	int t,n;
	string s1,s2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		assign(2*n);
		int cnt=1;
		for(int i=0 ; i < n ; i++){
			cin>>s1>>s2;
			if(!m[s1])m[s1]=cnt++;
			if(!m[s2])m[s2]=cnt++;
			int a=m[s1],b=m[s2];
			makeSet(a,b);
			printf("%d\n",setSize[findParent(a)]);
		}
		m.clear();
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
