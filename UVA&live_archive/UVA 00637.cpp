// UVa 637.cpp
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
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////

int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	int num,min,max,sheet;
	while(scanf("%d",&num)){
		if(!num)break;
		printf("Printing order for %d pages:\n",num);
		min=1,max=num;
		sheet=1;
		while(num){
			if(num%4==1){
				printf("Sheet %d, front: Blank, %d\n",sheet,min++);
				if(--num)
				printf("Sheet %d, back : %d, Blank\n",sheet,min++),num--;
				sheet++;
			}else if(num%4==2){
				printf("Sheet %d, front: Blank, %d\n",sheet,min++);
				printf("Sheet %d, back : %d, Blank\n",sheet,min++);
				sheet++;
				num-=2;
			}else if(num%4==3){
				printf("Sheet %d, front: Blank, %d\n",sheet,min++);
				printf("Sheet %d, back : %d, %d\n",sheet,min++,max--);
				num-=3;
				sheet++;
			}
			if(!(num%4) && num){
				while(max>=min){
					printf("Sheet %d, front: %d, %d\n",sheet,max--,min++);
					printf("Sheet %d, back : %d, %d\n",sheet,min++,max--);
					num-=4;
					sheet++;
				}
			}
		}
	}
	if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	return 0;
}

