// UVa 161.cpp
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
vector<int>lights;
int len;
bool allIsOn(int time){
	int green=0;
	for(int i=0 ; i < len ; i++){
		if(time%(2*lights[i]) < (lights[i]-5))green++;
	}
	return (green==len);
}
int main()
{
	bool reaaaaaaaaaadf=0;
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	int num,hour,min,sec,TIME;
	bool flag=0;
	scanf("%d",&num);
	while(num){
		min=1<<30;
		while(num){
			lights.push_back(num);
			min=min<num?min:num;
			scanf("%d",&num);
		}
		len=lights.size();
		flag=0;
		for(int i=min+1 ; i <= 5*60*60 && !flag;i++){
			if(allIsOn(i)){
				flag=1;
				TIME=i;
			}
		}
		if(flag){
			sec=TIME%60;
			min=TIME/60;
			hour=min/60;
			min%=60;
			printf("%02d:%02d:%02d\n",hour,min,sec);
		}
		else puts("Signals fail to synchronise in 5 hours");
		lights.clear();
		scanf("%d",&num);
	}
	if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	return 0;
}

