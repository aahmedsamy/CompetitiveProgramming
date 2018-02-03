#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
set<int>st[52],total;
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	int t,TC=1,n,m,num;
	cin>>t;
	while(t--)
	{
		printf("Case %d:",TC++);
		cin>>n;
		for(int i=0 ; i < n ;i++)st[i].clear();
		total.clear();
		for(int i=0 ; i < n ;i++)
		{
			cin>>m;
			while(m--)
			{
				cin>>num;
				st[i].insert(num);
				total.insert(num);
			}
		}
		set<int>::iterator it=total.begin();
		while(it!=total.end())
		{
			int cnt=0;
			for(int i=0 ; i < n ;i++)
			{
				if(st[i].find(*it)!=st[i].end())cnt++;
				if(cnt>1)break;
			}
			if(cnt>1)
			{
				for(int i=0 ; i < n ;i++)
				{
					st[i].erase(*it);
				}
				total.erase(*it);
				it=total.begin();
				continue;
			}
			it++;
		}
		double totalSize=(double)total.size();
		if(total.size()>=1)
		{
		for(int i=0 ; i < n ;i++)
			{
				printf(" %.6lf",(double)(st[i].size()/totalSize)*100.00);
				putchar('%');
			}
		}
		puts("");
	}
	//-------------------------------------	-----------------------------------
}
