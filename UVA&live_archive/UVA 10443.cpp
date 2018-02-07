// UVa 10443.cpp
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
#define readf freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/in" , "r" , stdin);
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
bool arr[100001];
int main()
{
	//readf;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	int t,r,c,n;
	char str[110][110],temp[110][110];
	bool print=0;
	scanf("%d",&t);
	while(t--){
		memset(temp,'a',sizeof temp);
		memset(str,'a',sizeof str);
		scanf("%d%d%d",&r,&c,&n);
		for(int i=1 ; i<=r ;i++){
			char ch='\n';
			while(ch=='\n' || ch==' ')ch=gcu();
			temp[i][1]=str[i][1]=ch;
			for(int j=2 ; j<=c ;j++){
				temp[i][j]=gcu();
				str[i][j]=temp[i][j];
			}
		}
		while(n--){
			for(int i=1 ; i <= r ;i++){
				for(int j=1 ; j<=c ;j++){
					if(temp[i][j]=='R'){
						if(str[i-1][j]=='P' || str[i+1][j]=='P' || str[i][j-1]=='P' || str[i][j+1]=='P')temp[i][j]='P';
					}
					else if(temp[i][j]=='S'){
						if(str[i-1][j]=='R' || str[i+1][j]=='R' || str[i][j-1]=='R' || str[i][j+1]=='R')temp[i][j]='R';
					}
					else if(temp[i][j]=='P'){
						if(str[i-1][j]=='S' || str[i+1][j]=='S' || str[i][j-1]=='S' || str[i][j+1]=='S')temp[i][j]='S';
					}
				}
			}
			for(int i=1 ; i <= r ; i++ )strncpy(str[i],temp[i],c+1);
		}
		for(int i=1 ; i<=r ;i++){
			for(int j=1 ; j<=c ;j++)printf("%c",str[i][j]);
			puts("");
		}
		if(t)puts("");
	}
}

