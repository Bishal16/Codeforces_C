#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,q;
    cin>>n;
    long long int a[n],a1[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-2;i++)
        if(a[i]==a[i+1] && a[i+1]==a[i+2])
             {cout<<"NO";return 0;}
    j=0;
    for(i=0;i<n-1;i++)
        if(a[i]<a[i+1])
            {
                a1[j]=a[i];
                a[i]=-1;
                j++;
            }
    q=i;
    cout<<"YES"<<endl<<j+1<<endl;
    for(i=0;i<j;i++)
        cout<<a1[i]<<" ";
    cout<<a[q];a[q]=-1;
    cout<<endl<<n-j-1<<endl;
    for(i=n-1;i>=0;i--)
        if(a[i]!=-1)
            cout<<a[i]<<" ";
}

