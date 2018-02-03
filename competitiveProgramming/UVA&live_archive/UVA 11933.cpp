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
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	LL n ;
	while(cin >> n, n)
	{
		LL a = 0, b = 0,add = 1;
		bool flag=1;
		while(n)
		{
			if(n & 1)
			{
				if(flag)a += add;
				else b += add;
				flag = !flag;
			}
			n /= 2;
			add *= 2;
		}
		printf("%lld %lld\n",a,b);
	}
	//-------------------------------------	-----------------------------------
}
