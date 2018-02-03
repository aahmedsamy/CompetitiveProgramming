// UVa 11221.cpp
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
int main()
{
	bool reaaaaaaaaaadf=0;
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	int n,cnt=0;
	char str[10000+5];
	int CASE=1;
	bool flag=1;
	scanf("%d\n",&n);
	while(n--){
		printf("Case #%d:\n",CASE++);
		flag=1;
		cnt=0;
		char ch;
		while(1){
			ch=gcu();
			if(ch=='\n' || ch==EOF)break;
			if(ch>='a' && ch<='z')str[cnt++]=ch;
		}
		float temp=sqrt(cnt);
		int root=temp;
		if(root<temp || str[0]!=str[cnt-1]){
			puts("No magic :(");
			flag=0;
		}
		for(int i=0 ; i < root && flag ;i++){
			if(str[i]!=str[i*root]){
				puts("No magic :(");
				flag=0;
			}
		}
		for(int i=0 ; i < root && flag ;i++){
			if(str[cnt-1-i]!=str[cnt-1-(i*root)]){
				puts("No magic :(");
				flag=0;
			}
		}
		if(flag)printf("%d\n",root);
	}
	if(reaaaaaaaaaadf)puts("reaaaaaad if IS ONNNNNNNNN!!!");
	return 0;
}

