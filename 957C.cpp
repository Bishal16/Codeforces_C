#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1] && s[i]!='?')
            {cout<<"NO";return 0;}}
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1] && s[i]=='?')
            {cout<<"YES";return 0;}
        if(s[i]=='?')
            c++;
    }
    for(i=1;i<n-1;i++)
        if(s[i]=='?' && s[i-1]==s[i+1])
            {cout<<"YES";return 0;}
    if(s[0]=='?' || s[n-1]=='?' )
        {cout<<"YES";return 0;}
    else
        cout<<"NO";
}
