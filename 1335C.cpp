#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,i,d,lcs,lcs1;
    cin>>t;
    while(t--){
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        d=1;lcs=1;lcs1=1;
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                {d++;
                lcs1=1;}
            else if(a[i]==a[i+1] )
                {
                    lcs1++;
                    if(lcs1>lcs)
                        lcs=lcs1;
                }
        }
         if(d>lcs)
            cout<<lcs<<endl;
        else if(d==lcs)
            cout<<lcs-1<<endl;
        else if(d<lcs)
             cout<<d<<endl;
    }
}
