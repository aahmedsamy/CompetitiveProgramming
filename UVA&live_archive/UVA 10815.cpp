#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
set<string>ans;
string clean(string str)
{
	string ret="";
	int len=str.size();
	for(int i=0 ; i < len ;i++)
	{
		if(isalpha(str[i]))ret+=tolower(str[i]);
	}
	return ret;
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	char ch;
	string str="";
	while(ch=gcu())
	{
		if(ch==EOF)break;
		if(isalpha(ch))str+=tolower(ch);
		else
		{
			if(str.size())ans.insert(str);
			str="";
		}
	}
	set<string>::iterator it=ans.begin();
	while(it!=ans.end())
	{
		puts((*it++).c_str());
	}
	//-------------------------------------	-----------------------------------
}
