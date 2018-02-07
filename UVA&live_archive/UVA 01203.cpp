// UVa 01203.cpp
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
struct s{
	int x,y;
}data[10010];
bool cmp(s b,s a){
	if(a.x>b.x)return 1;
	return 0;
}
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//------------------------------------------------------------------------
	char ch[9];
	int k,i=0,cnt;
	while(1){
		scanf("%s",ch);
		if(ch[0]=='#')break;
		scanf("%d%d",&data[i].x,&data[i].y);
                i++;
	}
	sort(data,data+i,cmp);
	cnt=i;
	scanf("%d",&k);
	for(i=1;k;i++){
		for(int j=0; j < cnt && k; j++){
			if(!(i%data[j].y)){
				printf("%d\n",data[j].x);
				k--;
			}
		}
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
