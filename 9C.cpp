#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,ans=0,l,ll,n1,v;
    string ns,s="1",f="1";
    cin>>ns;

    n1=stoi(ns);
    l=ns.length();
    if(l==1){cout<<1;return 0;}
    for(i=0;i<l-1;i++)
        ans=ans+pow(2,i);
    for(i=0;i<l-1;i++)
        {s=s+"0";f=f+"1";}

    v=std::stoi(s);
    //cout<<"s = "<<s<<endl<<"n1 =  "<<ans<<endl<<"v ="<<v<<endl;

    while(v<=n1)
    {
        ll=l;
        if(s[l-1]=='0' && l-1>0)
            {s[l-1]='1';ans++;}
        else if(s[l-1]=='1' && l-1>0 && s.find("0")<10)
            while(ll--)
                if(s[ll]=='1')
                    s[ll]='0';
                else if(s[ll]=='0')
                    {s[ll]='1';ans++;break;}
        v=stoi(s);
        //cout<<"v1 ="<<s<<endl;
        if(s.find("0")>10)
           { break;}

    }
    if(ns>=f)
        cout<<ans+1;
    else
        cout<<ans;
}
