// UVa 584.cpp
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
	int sum=0;
	char str[50];
	scanf("%c",&*str);
	while(*str!='G'){
		for(int i=1 ; str[i-1]!='\n' ;i++){
			if(str[i-1]==' ')i--;
			scanf("%c",&str[i]);
		}//1  0  1  /  2  2  X  3  3  X  1  /  3  /  X  1  2
		int len=strlen(str)-1,cnt=0;
		for(int i=0 ; i < len  && cnt!=20 ;i++){
			cnt++;
			if(str[i]=='X'){
				cnt++;
				sum+=10;
				if(str[i+1]=='X'){
					if(str[i+2]=='X')sum+=20;
					else sum+=(10+str[i+2]-'0');
				}
				else if(str[i+2]=='/')sum+=10;
				else sum+=((str[i+1]-'0')+(str[i+2]-'0'));
			}else if(str[i]=='/'){
				sum+=(10-(str[i-1]-'0'));
				if(str[i+1]=='X')sum+=10;
				else sum+=(str[i+1]-'0');
			}else{
				sum+=(str[i]-'0');
			}
		}
		printf("%d\n",sum);
		sum=0;
		scanf("%c",&*str);
	}
}

