#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,c;
    cin>>t;
    string s;
    while(t--)
    {
		cin>>n;
		cin>>s;c=0;
		string a="1",b="1";
		for(i=1;i<n;i++)
		{
			if(s[i]=='2' && c==0)
			{
				a=a+"1";
				b=b+"1";
			}
			else if(s[i]=='1' && c==0)
			{
				c=1;
				a=a+"1";
				b=b+"0";
			}
			else if(s[i]=='0' && c==0)
			{
				a=a+"0";
				b=b+"0";
			}
			else
			{
				c=1;
				a=a+"0";
				string p(1,s[i]);
				b=b+p;
			}
		}
		cout<<a<<endl<<b<<endl;
    }
}
