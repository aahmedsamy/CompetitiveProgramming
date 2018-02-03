#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/

/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	int n,arr[10000],cnt;
	while(cin>>n)
	{
		cnt=0;
		for(int i=0 ; i < n ;i++)
		{
			cin>>arr[i];
		}
		for(int i=1 ; i < n ;i++)
			for(int j=0 ; j < i ; j++)
			{
				if(arr[j]>arr[i])
				{
					cnt++;
				}
			}
		printf("Minimum exchange operations : %d\n",cnt);
	}
	//-------------------------------------	-----------------------------------
}
