#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c,x;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];c=0;x=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                c++;
        }
        sort(arr,arr+n);
        if(c%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            for(i=0;i<n-1;i++)
                if(arr[i]-arr[i+1]==-1)
                    {cout<<"YES"<<endl;x++;break;}
        }
        if(x==0)
            cout<<"NO"<<endl;
    }
}
