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
	string ret=string(1,str[0]);
	int len=str.size();
	for(int i=1 ; i < len ;i++)
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
	string str="",word="";
	bool flag=0;
	while(cin>>str)
	{
		int len=str.size();
		for(int i=0 ; i < len ; i++)
		{
			if(isalpha(str[i]))word+=tolower(str[i]);
			else if(i<len-1 && str[i]=='-')word+='-';
			if(i==len-1 && isalpha(str[i]))
			{
				ans.insert(word);
				word="";
			}
			else if(!isalpha(str[i]) && str[i]!='-'&&word!="")
			{
				ans.insert(word);
				word="";
			}
		}
	}
	set<string>::iterator it=ans.begin();
	while(it!=ans.end())
	{
		puts((*it++).c_str());
	}
	//-------------------------------------	-----------------------------------
}
