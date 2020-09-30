#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=1;i<=n/2;i++)
            s=s+i*2*i;
        cout<<s*4<<endl;
    }
}
