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
	int arr[10000],n,ans=0;
	while(cin>>n && n)
	{
		ans=0;
		for(int i=0 ; i < n ;i++)
		{
			cin>>arr[i];
		}
		arr[n]=arr[0];
		arr[n+1]=arr[1];
		for(int i=1 ; i <= n ; i++)if((arr[i]>arr[i-1] && arr[i]>arr[i+1])||(arr[i]<arr[i-1] && arr[i]<arr[i+1]))ans++;
		if(n==2)
		{
			puts("2");
			continue;
		}
		cout<<ans<<endl;
	}
	//-------------------------------------	-----------------------------------

}
