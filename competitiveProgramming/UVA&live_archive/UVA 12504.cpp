#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
#define gcu() getchar_unlocked()
using namespace std;
int dx[]={-1, 0, 1, 0,-1, 1, 1,-1};
int dy[]={ 0, 1, 0,-1, 1, 1,-1,-1};
/*-----------------------------------------------*/
map<string,string>m1,m2;
set<string>a,b,c,total;
void solve(map<string,string> &m,string str)
{
	int len=str.size();
	string value="",word="";
	char ch,sign;
	for(int i=0 ; i < len ;i++)
	{
		ch=str[i];
		if(ch=='}')
		{
			gcu();
			if(value!="")
			{
				m[word]=value;
			}
			break;
		}
		if(ch=='{' || ch==',')
		{
			if(value!="")
			{
				m[word]=value;
			}
			word=value="";
			sign=',';
		}
		else if(ch==':')
		{
			total.insert(word);
			value="";
			sign=':';
		}
		else if(sign==',')
		{
			word+=ch;
		}
		else if(sign==':')
		{
			value+=ch;
		}
	}
}
void prnt(set<string> &st)
{
	set<string>::iterator it=st.begin();
	cout<<*it++;
	while(it!=st.end())
	{
		putchar(',');
		cout<<*it++;
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	#ifndef ONLINE_JUDGE
	readf
	writef
	#endif
	int t;
	string str,value;
	cin>>t;
	while(t--)
	{
		m1.clear();m2.clear();total.clear();
		a.clear(),c.clear(),b.clear();
		cin>>str;
		solve(m1,str);
		cin>>str;
		solve(m2,str);

		set<string>::iterator it=total.begin();
		while(it!=total.end())
		{
			string word=*it;
			if(m1.find(word)==m1.end())
			{
				a.insert(word);
			}
			else if(m2.find(word)==m2.end())
			{
				b.insert(word);
			}
			else if(m2[word]!=m1[word])
			{
				c.insert(word);
			}
			it++;
		}
		if(!a.size() && !b.size() &&!c.size())
		{
			puts("No changes");
		}
		else if(a.size())
		{
			putchar('+');
			prnt(a);
			puts("");
		}
		if(b.size())
		{
			putchar('-');
			prnt(b);
			puts("");
		}
		if(c.size())
		{
			putchar('*');
			prnt(c);
			puts("");
		}
		puts("");
	}
	//-------------------------------------	-----------------------------------
}
