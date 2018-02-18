//UVA 1121.cpp
#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long LL ;
typedef unsigned long long ULL ;
const LL INFLL = 4e18;
const int INFINT = 2e9;
using namespace std;
//int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
//int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
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
	int n, s;
	int arr[100000];
	while(cin >> n >> s)
	{
		for(int i = 0 ; i < n ; i++)cin >> arr[i];
		int sum = 0,ans = 100000001,b = 0;
		bool zero = 1;
		for(int i = 0 ; i < n ; i++)
		{
			sum += arr[i];
			if(sum >= s)
			{
				zero = 0;
				ans = min(ans, i - b + 1);
				sum -= arr[b++];
				sum -= arr[i--];
			}
		}
		if(zero)cout << 0 ;
		else cout << ans;
		cout << endl;
	}
	//------------------------------------------------------------------------
}
