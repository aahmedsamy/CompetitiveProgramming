#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
int arr[101];
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	//writef
	#endif
	int n,num;
	bool flag=0;
	while(cin>>n,n)
	{
		for(int i=0 ; i < n ; i++)
		{
			scanf("%d",&num);
			arr[num]++;
		}
		for(int i=1 ; i < 101 ;i++)
		{
			while(arr[i])
			{
				if(flag)putchar(' ');
				flag=1;
				printf("%d",i);
				arr[i]--;
			}
		}
		flag=0;
		puts("");
	}
	//-------------------------------------	-----------------------------------
}
