//prob's solution for : 00626 UVa
//It's all about what U BELIEVE and LOVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y <= z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar
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
#define MAXSIZE 100000 + 1
//FILE *fin, *fout;
bool reaaaaaaaaaadf=false;
using namespace std;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
int main()
{
	//readf; reaaaaaaaaaadf=true;
	//-----------------------------------------------------------------------
	int n;
	int arr[101][101];
	set<string>st;
	set<string>::iterator it;
	string temp,ans;
	while(scanf("%d",&n)==1){
		for(int i = 0 ; i < n ; i++)
			for(int j=0 ; j < n ; j++)scanf("%d",&arr[i][j]);
		for(int i=0 ; i < n ; i++){
			temp=i+'0';
			for(int j=0 ; j < n ; j++){
				if(arr[i][j]){
					temp+=j+'0';
					int k=j ;
					for(int l = 0 ; l < n ; l++ ){
						if(temp[0]==l+'0')continue;
						else if(arr[k][l]){
							temp+=l+'0';
							for(int zeft=0 ; zeft<n ;zeft++)
							if(arr[temp[2]-'0'][zeft] && zeft == i){
								if(temp[2]>temp[1] && temp[1]>temp[0])st.insert(temp);
								else if(temp[2]<temp[1] && temp[1]<temp[0])st.insert(temp);
							}
								/*else if(arr[m][o]){
									temp+=o+'0';
									cout<<temp<<endl;

								}*/
							temp.erase(2);
						}
					}
					temp.erase(1);
				}
			}
		}
		n=st.size();
		it=st.begin();
		while(it!=st.end()){
			temp=*it++;
			printf("%d",temp[0]-'0'+1);
			for(int j=1 ; j < 3 ; j++)printf(" %d",temp[j]-'0'+1);
			puts("");
		}
		printf("total:%d\n\n",n);
		st.clear();
	}
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
