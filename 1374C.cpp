#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,i,a,b,c;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        a=0;b=0;c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
                a++;
            else if(s[i]==')')
                {b++;
                if(b>a)
                    {c++;
                    b--;}}
        }
        cout<<c<<endl;
    }
}
