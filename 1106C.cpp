#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,s=0,p;;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);p=n-1;
    for(i=0;i<n/2;i++)
    {
        s=s+pow( a[i]+a[p]  ,2);
        p--;
    }
    cout<<s;
}
