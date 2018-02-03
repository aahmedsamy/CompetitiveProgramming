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
ULL arr[1000000];
string str;
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int len, q, a, b, TC = 1;
	while(cin >> str)
	{
		len = str.size() ;
		printf("Case %d:\n", TC++);
		arr[1] = str[0]-'0';
		for(int i = 2 ; i <= len ;i++)arr[i] = arr[i - 1] + str[i-1] - '0';
		cin >> q;
		while(q--)
		{
			cin >> a >> b;
			if(b < a)swap(a, b);
			b++;
			int num = arr[b] - arr[a];
			if(!num || num == b - a)puts("Yes");
			else puts("No");
		}
	}
	//-------------------------------------	-----------------------------------
}
