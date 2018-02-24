UVA 465.cpp
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
int SIZE = 1e5;
/*-----------------------------------------------*/

/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	double a, b;
	char op;
	char s[5000];
	while(gets(s))
	{
		puts(s);
		sscanf(s, "%lf %c %lf", &a, &op, &b);
		if(a > INT_MAX)
			cout << "first number too big\n";
		if(b > INT_MAX)
			cout << "second number too big\n";
		if(((op == '+') && (a + b > INT_MAX ) ) || ( (op =='*') && (a * b > INT_MAX) ))
			cout << "result too big\n";

	}
	//------------------------------------------------------------------------
}
