//UVA 11520.cpp
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
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t, n, TC = 1;
	char grid[10][11];
	cin >> t;
	while(t--)
	{
		printf("Case %d:\n", TC++);
		cin >> n;
		for(int i = 0; i < n ; i++)
			cin >> grid[i];

		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				if(grid[i][j]=='.')
				{
					bool put;
					for(char ch = 'A' ; ch <= 'Z' ; ch++)
					{
						put = 1;
						for(int k = 0 ; k < 4 ; k++)
						{
							int x = dx[k] + i, y = dy[k] + j;
							if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == ch)
							{
								put = 0;
								break;
							}
						}
						if(put)
						{
							grid[i][j] = ch;
							break;
						}
					}
				}

		for(int i = 0 ; i < n ; i++)
		{
			puts(grid[i]);
		}
	}
	//-------------------------------------	-----------------------------------
}
