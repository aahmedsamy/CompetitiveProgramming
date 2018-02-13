//UVA 10474.cpp
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
vector<int>v;
int BS(int key)
{
	int lo = 0, hi = v.size() - 1, mid, ret = -1;
	while(lo <= hi)
	{
		mid = lo + (hi - lo) / 2;
		if(v[mid] >= key)
		{
			if(v[mid] == key)ret = mid;
			hi = mid - 1;
		}
		else if(v[mid] < key)
		{
			lo = mid + 1;
		}
	}
	return ret + 1;
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int n, q, num,TC=1;
	while(cin >> n >> q && n && q)
	{
		v.clear();
		cout << "CASE# " << TC++ << ':' <<endl;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		while(q--)
		{
			cin >> num;
			int pos = BS(num);
			if(pos)cout << num <<" found at " << pos << endl;
			else cout << num << " not found\n";
		}
	}
	//-------------------------------------	-----------------------------------
}
