//prob's solution for : 00725 UVa
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
bool check(int a, int b){
	bool arr[10]={0};
	int cnt=5;
	while(a){
		if(arr[a%10])return 0;
		arr[a%10]=1;
		a/=10;
		cnt--;
	}
	if(arr[0]){
		if(cnt)return 0;
	}
	cnt=5;
	while(b){
		if(arr[b%10])return 0;
		arr[b%10]=1;
		b/=10;
		cnt--;
	}
	if(cnt && arr[0])return 0;
	return 1;
}
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//------------------------------------------------------------------------
	int n,cnt=0;
	bool flag;
	while(scanf("%d",&n) && n){
		if(cnt++)puts("");
		flag=1;
		for(int i=12345 ; i <= 98765 ; i++){

			if(i%n==0 && i/n>=1234 && check(i,i/n))printf("%5d / %.5d = %d\n",i,i/n,n),flag=0;
		}
		if(flag)printf("There are no solutions for %d.\n",n);

	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
