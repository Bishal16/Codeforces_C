#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,i;
    cin>>n>>k;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(k==0)
        if(a[0]==1)
            {cout<<-1;return 0;}
        else
            {cout<<1;return 0;}
    if(a[k-1]!=a[k] || k==n)
        cout<<a[k-1];
    else
        cout<<-1;
}
