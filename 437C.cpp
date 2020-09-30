#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,s,se,mn,mp;
    cin>>n>>m;
    long long int v[n+1],x[m+1],y[m+1],vf[n+1];
    for(i=1;i<=n;i++)
        {cin>>v[i];vf[i]=0;}
    for(i=1;i<=m;i++)
        cin>>x[i]>>y[i];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(x[j]==i)
                vf[i]=vf[i]+v[y[j]];
            else if(y[j]==i)
                vf[i]=vf[i]+v[x[j]];
        }
    }s=0;
    for(i=1;i<=n;i++)
    {
        mn=100000*1000;
        for(j=1;j<=n;j++)
            if(vf[j]<mn)
                {mn=vf[j];
                mp=j;}
        s=vf[mp];

        for(j=1;j<=m;j++)
        {
            if(x[j]==mp)
                vf[y[j]]=vf[y[j]]-v[x[j]];
            else if(y[j]==mp)
                vf[x[j]]=vf[x[j]]-v[y[j]];
        }
        vf[mp]=100000*1000;
cout<<endl<<s;
    }
    for(i=1;i<=n;i++)
    cout<<vf[i]<<" ";
    cout<<endl<<s;
}
