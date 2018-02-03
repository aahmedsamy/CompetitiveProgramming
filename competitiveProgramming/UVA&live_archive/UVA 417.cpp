#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
map<string,int>m;
void stringGenerators()
{
	queue<string>q;
	for(char i='a'; i <= 'z' ; i++)q.push(string(1,i));
	string str;
	int cnt=0;
	while(!q.empty())
	{
		str=q.front();
		q.pop();
		cnt++;
		m[str]=cnt;

		if(str.size()==5)continue;

		for(char i=str[str.size()-1]+1; i <= 'z' ; i++)q.push(str+i);
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	stringGenerators();

	string str;
	while(cin>>str)
	{
		cout<<m[str]<<endl;
	}
	//-------------------------------------	-----------------------------------
}
