// UVa 755.cpp
/*
ID:ahmeds1
PROG:milk3
LANG:C++
*/
//It's all about what U BELIEVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y < z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar_unlocked
#define modulo 1000000007
#define wtm while(t--)
#define wnm while(n--)
#define non if(!n)break;
#define lsone(Z) (Z&-Z)
#define clr(arr,val) memset(arr,val,sizeof arr)
#define readf freopen("in" , "r" , stdin);
#define writef freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/out" , "w" , stdout);
using namespace std;
typedef vector<int> vi;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
//FILE *fin, *fout;
using namespace std;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////
map<string,int>m;
set<string> st;
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//------------------------------------------------------------------------
	int t,n;
	char ch;
	string str;
	scanf("%d\n",&t);
	wtm{
		scanf("%d\n",&n);
		fo(0,i,n){
			int j=0;
			str="";
			ch=gcu();
			while(ch!='\n' && ch!=EOF){
				if(ch=='-' || ch==' '){
					ch=gcu();
					continue;
				}
				if(ch=='A' || ch=='B' || ch=='C')str+='2',j++;
				else if(ch=='D' || ch=='E' || ch=='F')str+='3',j++;
				else if(ch=='G' || ch=='H' || ch=='I')str+='4',j++;
				else if(ch=='J' || ch=='K' || ch=='L')str+='5',j++;
				else if(ch=='M' || ch=='N' || ch=='O')str+='6',j++;
				else if(ch=='P' || ch=='R' || ch=='S')str+='7',j++;
				else if(ch=='T' || ch=='U' || ch=='V')str+='8',j++;
				else if(ch=='W' || ch=='X' || ch=='Y')str+='9',j++;
				else if(ch!='-')str+=ch,j++;
				if(j==3)str+='-';
				ch=gcu();
			}
			m[str]++;
			if(m[str]>1)st.insert(str);
		}
		set<string>::iterator it=st.begin();
		if(st.size()){
			while(it!=st.end()){
				printf("%s %d\n",(*it).c_str() ,m[*it]);
				it++;
			}
		}else puts("No duplicates.");
		st.clear(),m.clear();
		if(t)puts("");
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}

