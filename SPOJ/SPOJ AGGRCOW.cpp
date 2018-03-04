//SPOJ AGGRCOW.cpp
#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
typedef long long ll ;
typedef unsigned long long ull ;
const ll infll = 4e18;
const int infint = 2e9;
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
int SIZE = 1e5;
/*--------------------------------------------------*/
int n, c;
int arr[100000];

bool check(int mid)
{
	int temp = c - 1, pos = arr[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i] - pos >= mid)
		{
			temp--;
			pos = arr[i];
		}
	}
	return temp < 1;
}
/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	//writef//
	#endif
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> c;
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		int mid, lo = 0, hi = 1000000000, maxa = 0;
		for(int i = 0 ; i < 30 ; i++)
		{
			mid = (hi + lo) >> 1;
			if(check(mid))
			{
				maxa = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
		cout << maxa << endl;
	}
	//------------------------------------------------------------------------
}
