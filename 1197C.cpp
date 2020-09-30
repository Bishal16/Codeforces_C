#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,s=0;
    cin>>n>>k;
    long long int a[n],b[n-1];
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        b[i-1]=a[i]-a[i-1];
    }
    sort(b,b+n-1);
    for(i=0;i<(n-1-k+1);i++)
        s=s+b[i];
    cout<<s;
}
