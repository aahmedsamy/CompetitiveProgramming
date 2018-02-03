#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long LL ;
typedef unsigned long long ULL ;
const LL INF = 4e18;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int l, ans, b;
	bool z;
	char ch, last;
	while(scanf("%d\n", &l) , l)
	{
		last=' ';
		z = 0;
		ans = 1<<30;
		b = 0;
		while(l--)
		{
			b++;
			ch=gcu();
			if(ch=='Z')z = 1, ans = 0;
			else if(!z && isalpha(ch))
			{
				if(last==' ')last = ch, b = 0;
				else if(ch != last)
				{
					ans = min(ans, b);
					last=ch;
					b = 0;
				}
				else
				{
					b = 0;
				}
			}
		}
		printf("%d\n", ans);
	}
	//-------------------------------------	-----------------------------------
}
