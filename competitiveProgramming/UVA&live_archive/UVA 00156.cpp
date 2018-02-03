// UVa 156.cpp
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
#define readf freopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/in" , "r" , stdin);
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
int main()
{
	bool reaaaaaaaaaadf=0;
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	vector<string>str,out;
	string org ,temp;
	bool flag;
	cin>>org;
	int cnt=0;
	while(org!="#"){
		cnt++;
		str.push_back(org);
		cin>>org;
	}
	int numWords=str.size();
	for(int i=0 ; i < numWords;i++){
		if(str[i]=="00")continue;
		org=str[i];
		int k=0;
		while(org[k]){
			char ch=org[k];
			ch=tolower(ch);
			org[k++]=ch;
		}
		sort(org.begin(),org.end());
		flag=1;
		for(int j=i+1 ; j < numWords ; j++){
			temp=str[j];
			k=0;
			while(temp[k]){
				char ch=temp[k];
				ch=tolower(ch);
				temp[k++]=ch;
			}
			sort(temp.begin(),temp.end());
			if(temp==org)str[j]="00",flag=0;
		}
		if(flag)out.push_back(str[i]);
	}
	int len=out.size();
	sort(out.begin(),out.end());
	for(int i=0 ; i < len ;i++)cout<<out[i]<<endl;
	if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	return 0;
}

