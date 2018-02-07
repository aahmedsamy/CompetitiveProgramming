// UVa 10813.cpp
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
bool tst[5][5];
bool check(int x, int y){
	for(int j=0 ; j < 5 ; j++){
		if(x==2 && j==2)j++;
		if(!tst[x][j])j=5;
		if(j==4)return 1;
	}
	for(int i=0 ; i<5;i++){
		if(y==2 && i==2)i++;
		if(!tst[i][y])i=5;
		if(i==4)return 1;
	}
	if(x==y){
		for(int i=0,j=0 ; i<5 ;i++,j++){
			if(j==2 && i==2)i++,j++;
			if(!tst[i][j])i=5;
			if(i==4)return 1;
		}
	}
	if(y+x==4){
		for(int i=0 , j=4 ;i<5 ;i++,j--){
			if(j==2 && i==2){
				i=3;
				j=1;
			}
			if(!tst[i][j])i=5;
			if(i==4)return 1;
		}
	}
	return 0;
}
int main()
{
	readf;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	int grid[5][5],num;
	int t,cnt=0;
	scanf("%d",&t);
	while(t--){
		cnt=0;
		bool flag=1;
		for(int i=0 ; i < 5 ;i++)
			for(int j=0 ; j< 5 ; j++){
				if(i==2 && j==2)j++;
					scanf("%d",&grid[i][j]);
					tst[i][j]=0;
			}
		while(flag && scanf("%d",&num)==1){
			cnt++;
			if(num>=1 && num<=15){
				for(int i=0 ; i< 5 ; i++){
				if(grid[i][0]==num){
					tst[i][0]=1;
					if(check(i,0)){
						printf("BINGO after %d numbers announced\n",cnt);
						flag=0;
					}
					i=5;
				}
			}
			}else if(num>15 && num<=30){
				for(int i=0 ; i< 5 ; i++){
					if(grid[i][1]==num){
						tst[i][1]=1;
						if(check(i,1)){
							printf("BINGO after %d numbers announced\n",cnt);
							flag=0,i=5;
						}
						i=5;
					}
				}
			}else if(num>30 && num<=45){
				for(int i=0 ; i< 5 ; i++){
					if(grid[i][2]==num){
						tst[i][2]=1;
						if(check(i,2)){
							printf("BINGO after %d numbers announced\n",cnt);
							flag=0;
						}
						i=5;
					}
				}
			}else if(num>45 && num<=60){
				for(int i=0 ; i< 5 ; i++){
					if(grid[i][3]==num){
						tst[i][3]=1;
						if(check(i,3)){
							printf("BINGO after %d numbers announced\n",cnt);
							flag=0;
						}
						i=5;
					}
				}
			}else if(num>60 && num<=75){
				for(int i=0 ; i< 5 ; i++){
					if(grid[i][4]==num){
						tst[i][4]=1;
						if(check(i,4)){
							printf("BINGO after %d numbers announced\n",cnt);
							flag=0;
						}
						i=5;
					}
				}
			}
		}

		while(cnt<75){
			scanf("%d",&num);
			cnt++;
		}
	}
	puts("READF IS ONNNNNNNNNNN ");
	return 0;
}

