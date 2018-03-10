UVA 599.cpp
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

/*-----------------MAIN FUNCTION--------------------*/
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	readf
	writef//
	#endif
	int t;
	vector<int>adjlist[50];
	vector<int>v;
	bool vis[100];
	char str[100];
	stack<int> tree;
	scanf("%d\n", &t);
	while(t--)
	{
		v.clear();
		for(int i = 0 ; i < 50 ; i++)adjlist[i].clear();
		memset(vis, 0, sizeof vis);
		while(scanf("%s\n", str) == 1)
		{
			if(str[0] == '*')break;
			adjlist[str[1] - 'A'].push_back(str[3] - 'A');
			adjlist[str[3] - 'A'].push_back(str[1] - 'A');
		}

		scanf("%s\n", str);

		int len = strlen(str);
		for(int i = 0 ; i < len ;i += 2)v.push_back(str[i] - 'A');


		int dotcnt = 0, treecnt = 0, cnt = 0, node;

		len = v.size();

		for(int i = 0 ; i < len ; i++)
		{
			tree.push(v[i]);
			cnt = 0;
			while(!tree.empty())
			{
				node = tree.top();
				if(!vis[node])cnt++;
				vis[node] = 1;
				tree.pop();
				int sz = adjlist[node].size();
				for(int j = 0 ; j < sz ; j++)
				{
					int curnode = adjlist[node][j];
					if(vis[curnode])continue;
					cnt++;
					vis[curnode] = 1;
					tree.push(curnode);
				}
			}
			if(cnt == 1)dotcnt++;
			else if(cnt) treecnt++;
		}
		printf("There are %d tree(s) and %d acorn(s).\n", treecnt, dotcnt);
	}
	//------------------------------------------------------------------------
}
