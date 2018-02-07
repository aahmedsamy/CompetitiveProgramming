// UVa 10226.cpp

/*
ID:ahmeds1
PROG:milk3
LANG:C++
*/

//It's all about what U BELIEVE
#include<bits/stdc++.h>

#define endl '\n'

#define fo(s , y , z) for(int y = s ; y < z ; y++)

#define lne if(liAne)puts("");else line = 1;

#define pb push_back
#define gcu getchar_unlocked

#define modulo 1000000007

#define wtm while(t--)

#define wnm while(n--)

#define non if(!n)break;

#define lsone(Z) (Z&-Z)

#define clr(arr,val) memset(arr,val,sizeof arr)

#define readf freopen("in" , "r" , stdin);

#define writef freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/out" , "w" , stdout);

using namespace std;

typedef vector<int> vi;

typedef unsigned int ui;

typedef unsigned long long ull;

typedef long long ll;

typedef pair<int , int> pairii;

typedef pair<ull , ull> pairull;

typedef set<int> seti;

typedef set<ull> setull;

typedef queue<int> qint;

typedef deque<int> dqint;

typedef unsigned long long ull;

typedef long long ll;

typedef pair<int , int> pairii;

typedef pair<ull , ull> pairull;

typedef set<int> seti;

typedef set<ull> setull;

typedef queue<int> qint;

typedef deque<int> dqint;

//FILE *fin, *fout;
using namespace std;

bool reaaaaaaaaaadf=0;

//////////////////////////////////////////////////

int main()
{

	//readf; reaaaaaaaaaadf=1;

	//writef;

	//fin = fopen("in", "r");

	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");

	//fin = fopen("milk3.in", "r");

	//fout = fopen("milk3.out", "w");

	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");

	//------------------------------------------------------------------------

	string str;

	char s[50];

	map<string , int >m;

	map<string , int>::iterator it;

	int t,cnt;

	scanf("%d\n\n",&t);

	while(t--){

		cnt=0;

		while(gets(s) && strlen(s)){

			cnt++;

			str=s;

			m[str]++;

		}

		it=m.begin();

		while(it!=m.end()){

			printf("%s",(it->first).c_str());

			printf(" %.4f\n",it->second*100.0/cnt);

			it++;

		}

		if(t){

			puts("");

			m.clear();

		}


	}

	//------------------------------------------------------------------------

	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");

	return 0;

}
