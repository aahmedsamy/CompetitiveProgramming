#include<bits/stdc++.h>
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
using namespace std;
bool reaaaaaaaaaadf=0;
/*-----------------------------------------------*/
int a[600],b[600],ans[600],asz,bsz;
string str;

void convert(int state)
{
	int *arr;
	if(state)arr=a;
	else arr=b;
	int sz=str.size();
	sz--;
	for(int i=0,j=sz ; i <= sz ; i++,j--)
	{
		arr[i]=str[j]-'0';
		//cout<<arr[i]<<endl;
	}
	return ;
}

void mult()
{

	for(int i=0 ; i < asz ;i++)
	{
		int c=0,cur=i;
		for(int j=0 ; j<bsz ;j++ )
		{
			c=b[i]*a[j];
			//cout<<b[i]<<" * "<<a[j]<<" = "<<c<<endl;
			ans[j+i]+=c;
			c=ans[i+j]/10;
			ans[j+i]%=10;
			while(c)
			{
				i++;
				ans[i+j]+=c%10;
				c/=10;
				c+=ans[i+j]/10;
				ans[i+j]%=10;

			}
			i=cur;
		}
	}
	bool zero=1;
	for(int i=600-1 ; i>=0 ; i--)
	{
		if(ans[i])zero=0;
		if(!zero)cout<<ans[i];
		if(zero && !i)printf("0");
	}
}
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------

	while(cin>>str)
	{
		memset(a,0,sizeof a);
		memset(ans,0,sizeof a);
		memset(b,0,sizeof b);
		asz=str.size();
		convert(0);
		cin>>str;
		bsz=str.size();
		convert(1);
		mult();
		puts("");
	}
	//-------------------------------------	-----------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
}
