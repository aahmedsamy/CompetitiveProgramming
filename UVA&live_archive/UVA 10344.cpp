#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long LL ;
typedef unsigned long long ULL ;
const LL INFLL = 4e18;
const int INFINT = 2e9;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
int arr[5],ans;
bool vis[5];
bool possible = 0;
void backTrack(int ans, int cnt)
{
	if(ans == 23 && cnt == 5)
	{
		possible = 1;
		return ;
	}
	for(int i = 0 ; i < 5 ; i++)
	{
		if(vis[i])continue;
		vis[i] = 1;
		backTrack(ans + arr[i] , cnt + 1);
		backTrack(ans - arr[i] , cnt + 1);
		backTrack(ans * arr[i] , cnt + 1);
		vis[i] = 0;
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	while(cin >> arr[0])
	{
		ans = 0;
		possible = 0;
		if(arr[0])
		{
			for(int i = 1 ; i < 5 ; i++)
				cin >> arr[i];
		}
		else return 0;

		for(int i = 0 ; i < 5 && !possible; i++)
		{
			vis[i] = 1;
			backTrack(arr[i], 1);
			vis[i] = 0;
		}
		if(possible)puts("Possible");
		else puts("Impossible");
	}
	//-------------------------------------	-----------------------------------
}
    
