//prob's solution for : 10487 UVa
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
	//-----------------------------------------------------------------------
	int q,n,arr[1001],test=1,ans,num,temp;
	while(scanf("%d",&n) && n){
		printf("Case %d:\n",test++);
		for(int i=0 ; i < n ;i++)scanf("%d",&arr[i]);
		scanf("%d",&q);
		for(int i=0 ; i < q ;i++){
			scanf("%d",&num);
			temp=abs(arr[1]+arr[0]-num);
			ans=arr[1]+arr[0];
			for(int j=0 ; j < n ;j++)
				for(int k=0 ; k < n ; k++)
					if(j!=k && abs(arr[j]+arr[k]-num)<temp)
						ans=arr[j]+arr[k],temp=abs(arr[j]+arr[k]-num);
			printf("Closest sum to %d is %d.\n",num,ans);
		}

	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
