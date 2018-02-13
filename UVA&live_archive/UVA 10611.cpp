//UVA 10026.cpp
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
	int n, q, num, arr[50000];
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	cin >> q;
	while(q--)
	{
		cin >> num;
		int *shorter, *taller;
		taller = upper_bound(arr, arr + n, num);
		shorter = taller;
		shorter--;
		while(shorter >= arr && *shorter== num)
		{
			shorter--;
		}
		if(shorter >= arr)
		{
			cout<<*shorter<< ' ';
		}
		else cout <<"X ";

		if(taller < arr + n)
			cout << *taller << endl;
		else cout << "X\n";
	}
	//-------------------------------------	-----------------------------------
}
