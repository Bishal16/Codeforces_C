#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k1,k2,i,c=0,p,af,bf;
    cin>>n;
    queue <int>a;
    queue <int>b;
    cin>>k1;
    for(i=0;i<k1;i++)
    {
        cin>>p;
        a.push(p);
    }
    cin>>k2;
    for(i=0;i<k2;i++)
    {
        cin>>p;
        b.push(p);
    }
    for(i=0;i<1000;i++)
    {
        af=a.front();
        bf=b.front();
        a.pop();
        b.pop();
        if(af>bf)
        {
            a.push(bf);
            a.push(af);
        }
        else
        {
            b.push(af);
            b.push(bf);
        }
        c++;
        if(a.empty())
            {cout<<c<<" "<<2;return 0;}
        if(b.empty())
            {cout<<c<<" "<<1;return 0;}
    }
    cout<<-1;
}
