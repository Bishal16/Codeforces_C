#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,s=0;
    cin>>n>>m;
    long long a[n],b[n],dif[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        s=s+a[i];
        dif[i]=a[i]-b[i];
    }
    if(s<=m)
        {cout<<0;return 0;}
    sort(dif,dif+n,greater<long long int>());
    for(i=0;i<n;i++)
    {
        s=s-dif[i];
        if(s<=m)
            {cout<<i+1;return 0;}
    }
    cout<<-1;
}
