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
	writef
	#endif
	int n,arr[1000];
	while(cin>>n && n)
	{
		for(int i=1 ; i <= n ;i++)arr[i]=i;
		printf("Discarded cards:");
		for(int i=1 ; i < n ;i++)
		{
			if(i>1)putchar(',');
			printf(" %d",arr[i++]);
			arr[++n]=arr[i];
		}
		printf("\nRemaining card: %d\n",arr[n]);
	}
	//-------------------------------------	-----------------------------------

}
