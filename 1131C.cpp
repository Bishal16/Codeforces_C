#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i+=2)
        cout<<a[i]<<" ";
    if(n%2!=0)
        n--;
    for(i=n-1;i>=0;i-=2)
        cout<<a[i]<<" ";
}
