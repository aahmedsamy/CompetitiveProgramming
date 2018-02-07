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
queue<int> waitl, waitr;
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif

	int cnt = 0, t, carL, totalL, cars, usedL;
	string back;
	bool left=1;
	cin >> t;
	while(t--)
	{
		cnt = 0;
		usedL = 0;
		left = 1;
		cin >> totalL >> cars;
		totalL *= 100;
		for(int i = 0 ; i < cars ; i++)
		{
			cin >> carL >> back;
			if(back == "left")
			{
				waitl.push(carL);
			}
			else
			{
				waitr.push(carL);
			}
		}
		while(!waitl.empty() || !waitr.empty())
		{
			cnt++;
			if(left)
			{
				while(!waitl.empty())
				{
					if(waitl.front() <= totalL - usedL)
					{
						usedL += waitl.front();
						waitl.pop();
					}
					else
					{
						break;
					}
				}
				usedL = 0;
				left = 0;
			}
			else
			{
				while(!waitr.empty())
				{
					if(waitr.front() <= totalL - usedL)
					{
						usedL += waitr.front();
						waitr.pop();
					}
					else
					{
						break;
					}
				}
				usedL = 0;
				left = 1;
			}
		}
		cout << cnt <<endl;
	}
	//-------------------------------------	-----------------------------------
}
