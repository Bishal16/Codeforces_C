#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    long long int m,s,i,mnp,mnv,c=0;
    string maxs="",mins="";
    cin>>m>>s;
    if(s==0 && m==1)
        {cout<<"0 0";return 0;}
    else if(s>m*9 || s==0 )
        {cout<<"-1 -1";return 0;}

    mnp=s/9;mnv=9;
    for(i=0;s>0 ;i++)
    {
        if(s>=9)
        {
            maxs=maxs+'9';
            s=s-9;
        }
        else if(s>0 && s<9)
        {    maxs=maxs+to_string(s);
            mnp=i+1;
            mnv=s;
            s=0;}
    }//cout<<mnp<<endl;
    if(mnp<m)
        for(i=0;i<m-mnp;i++)
            maxs=maxs+'0';



    if(mnv>1 && m-mnp>=1)
        {mins='1';c=1;}
    else
        mins=to_string(mnv);
    if(c==1)
        m--;

    for(i=0;i<m-(mnp);i++)
        mins=mins+'0';
    if(c==1)
        mins=mins+to_string(mnv-1);



    mins=mins+maxs.substr(0,mnp-1);
    cout<<mins<<" "<<maxs;
    //cout<<endl<<maxs.length()<<" "<<maxs.length();
}
