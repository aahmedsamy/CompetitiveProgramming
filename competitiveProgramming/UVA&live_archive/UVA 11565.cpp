//prob's solution for : 11565 UVa
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

int main()
{
	//readf; reaaaaaaaaaadf=true;
	//------------------------------------------------------------------------
	int t,a,b,c;
	scanf("%d",&t);
	wtm{
		bool flag=1;
		scanf("%d%d%d",&a,&b,&c);
		for(int i=-100 ; i <= 100 ; i++)
			for(int j=-100 ; j <= 100 ; j++)
				for(int k=-100 ; k <= 100 ; k++)
					if(i!=j && j!=k && i!=k && i+j+k==a && i*j*k==b && i*i+j*j+k*k ==c){
						if(flag)printf("%d %d %d\n",i,j,k);
						flag=0;
					}
		if(flag)puts("No solution.");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
