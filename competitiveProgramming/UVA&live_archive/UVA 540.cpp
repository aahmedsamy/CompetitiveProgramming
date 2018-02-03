#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
int teamClass[1000001];
queue<int>teamsOrder,q[10001];
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t,n,id,TC=1;
	string command;
	while(cin>>t,t)
	{
		printf("Scenario #%d\n",TC++);
		for(int i=0 ; i < t ; i++)
		{
			while(!q[i].empty())q[i].pop();
			while(!teamsOrder.empty())teamsOrder.pop();

			cin>>n;

			for(int j=0 ; j < n ;j++)
			{
				cin>>id;
				teamClass[id]=i;
			}
		}

			while(cin>>command,command[0]!='S')
			{
				if(command[0]=='E')
				{
					cin>>id;
					if(q[teamClass[id]].empty())
					{
						teamsOrder.push(teamClass[id]);
					}
					q[teamClass[id]].push(id);
				}else
				{
					int teamId=teamsOrder.front();
					cout<<q[teamId].front()<<endl;
					q[teamId].pop();
					if(q[teamId].empty())
					{
						teamsOrder.pop();
					}
				}
			}
			puts("");
	}
	//-------------------------------------	-----------------------------------

}
