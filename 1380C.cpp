#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x,i,c,j;
    cin>>t;
    while(t--){
        cin>>n>>x;
        long long a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);j=0;c=0;
        for(i=n-1;i>=0;i--)
        {
            j++;
            if(j*a[i]>=x)
                {c++;j=0;}
        }
        cout<<c<<endl;
    }
}
