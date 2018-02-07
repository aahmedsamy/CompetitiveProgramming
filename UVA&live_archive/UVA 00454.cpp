// UVa 454.cpp
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
bool cmp(char b, char a){
	if(tolower(a)==tolower(b))return b<a;
	return tolower(b)<tolower(a);
}
int main()
{
	bool reaaaaaaaaaadf=0;
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/in", "r");
	//fout = fopen("/media/aahmedsamy/AhmedSamy/Programming/Codes/AC/Icpc/out", "w");
	//fin = fopen("milk3.in", "r");
	//fout = fopen("milk3.out", "w");
	vector<string>str,ans;
	string org,temp;
	int n,l;
	scanf("%d\n",&n);
	while(n--){
		char ch;
		ch=gcu();
		while(ch!=EOF && ch!='\n' ){
			org="";
			while(ch!='\n' && ch!=EOF){
				org+=ch;
				ch=gcu();
			}
			str.push_back(org);
			if(ch==EOF)break;
			ch=gcu();
		}
		int len=str.size();
		for(int i=0 ; i < len-1 ;i++){
			org=str[i];
			int orglen=org.length();
			l=0;
			for(int k=0; k < orglen ; k++){
				if(org[k]!=' ')org[l++]=org[k];
			}
			org.erase(org.begin()+l,org.end());
			sort(org.begin(),org.end());
			for(int j=i+1 ; j<len ; j++){
				temp=str[j];
				int templen=temp.length();
				l=0;
				for(int k=0 ; k < templen ; k++){
					if(temp[k]!=' ')temp[l++]=temp[k];
				}
				temp.erase(temp.begin()+l,temp.end());
				sort(temp.begin(),temp.end());
				if(temp==org){
					if(str[i]<str[j]){
						ans.push_back(str[i]+" = "+str[j]);
					}
					else ans.push_back(str[j]+" = "+str[i]);
				}
			}
		}
		sort(ans.begin(),ans.end());
		int lenans=ans.size();
		for(int t=0 ; t < lenans ; t++)cout<<ans[t]<<endl;
		if(n)puts("");
		str.erase(str.begin(),str.end());
		ans.erase(ans.begin(),ans.end());
	}
	if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	return 0;
}

