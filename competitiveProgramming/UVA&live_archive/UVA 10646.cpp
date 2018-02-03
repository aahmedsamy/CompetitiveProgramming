// UVa 10646.cpp
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
#define readf freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in" , "r" , stdin);
#define writef freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out" , "w" , stdout);
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
	int n,removed=0;
	char pile[27][3],hand[26][3];
	scanf("%d\n",&n);
	int CASE=1;
	while(n--){
		printf("Case %d: ",CASE++);
		removed=0;
		for(int i=51 ; i >= 0 ;i-- ){
			if(i-24>0){
				scanf("%s",pile[i-25]);
			}else{
				scanf("%s",hand[i]);
			}
		}
		int y=0;
		for(int i=0 ; i < 3 ; i++){
			if(pile[removed][0]>'1' && pile[removed][0]<='9'){
				y+=pile[removed][0]-'0';
				removed+=(10-(pile[removed][0]-'0'));
			}else{
				y+=10;
			}
			removed++;
		}
		if(y<27-removed){
			printf("%s\n",pile[y+removed]);
		}else{
			printf("%s\n",hand[25+27-y-removed]);
		}
	}
}

