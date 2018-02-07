//UVA 10340.cpp
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
	writef
	#endif
	int i, j, lena, lenb;
	string a,b;
	while(cin >> a >> b)
	{
		i = 0, j = 0, lena = a.size() ; lenb = b.size();
		while(i < lena && j < lenb)
		{
			if(a[i] == b[j]) i++;
			j++;
		}
		if(i == lena)puts("Yes");
		else puts("No");
	}
	//-------------------------------------	-----------------------------------
}
