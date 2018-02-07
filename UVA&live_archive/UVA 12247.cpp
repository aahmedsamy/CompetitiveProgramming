// UVa 12247.cpp
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
	int girl[3],boy[2];
	while(scanf("%d%d%d%d%d",&girl[0],&girl[1],&girl[2],&boy[0],&boy[1])){
		bool card[53]={0},first=1,second=1,third=1;
		for(int i=0 ; i < 3 ; i++){
			if(i==2){
				card[girl[i]]=1;
				break;
			}
			card[girl[i]]=1;
			card[boy[i]]=1;
		}
		if(!(*girl))return 0;
		int cnt=0;
		sort(girl,girl+3);
		for(int i=0 ; i < 2 && cnt<2 ; i++){
			if(first && girl[0]>boy[i]){
				cnt++;
				first=0;
			}else if(second && girl[1]>boy[i]){
				cnt++;
				second=0;
			}else if(third && girl[2]>boy[i]){
				cnt++;
				third=0;
			}else{
				if(first)first=0;
				else if(second)second=0;
				else if(third)third=0;
			}
		}
		if(cnt==2){
			puts("-1");
		}else if(!cnt){
			int temp;
			temp=1;
			while(temp != 53 && card[temp] )temp++;
			if(temp==53)puts("-1");
			else printf("%d\n",temp);
		}else{
			int temp;
			if(first)temp=girl[0];
			else if(second)temp=girl[1];
			else if(third)temp=girl[2];
			while(temp != 53 && card[temp] )temp++;
			if(temp==53)puts("-1");
			else printf("%d\n",temp);
		}

	}
}

