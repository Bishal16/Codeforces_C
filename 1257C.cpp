#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,i,c,s,mn,v;
    cin>>t;
    while(t--){
        cin>>n;
        long int a[n],b[n];
        for(i=0;i<n;i++)
            {cin>>a[i];b[i]=a[i];}
        sort(a,a+n);
        c=1;mn=1;
        for(i=0;i<n-1;i++)
            if(a[i]==a[i+1])
            {
                c++;
                if(c>mn)
                    {mn=c;v=a[i];}

            }else c=1;//cout<<mn<<" "<<v<<endl;
        c=0;s=0;
        for(i=0;i<n;i++)
        {
            if(b[i]==v && c<=mn)
                c++;
            if(c>0 && c<mn)
                s++;
        }
        cout<<s+1<<endl;
    }
}
