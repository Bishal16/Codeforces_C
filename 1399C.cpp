#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int n,i,t,c;
double s1;
cin>>t;
while(t--)
{
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    s1=0;
    for(i=0;i<n;i++)
    //if(i<n/2+(n%2))
        s1=s1+a[i];
   // else
      //  s2=s2+a[i];//cout<<s1<<s2<<endl;
    s1=s1/(double)n;
    s1=lround(s1);
    //cout<<s1<<endl;
    //s2=s2/(n-(n/2+(n%2)));
    c=0;cout<<"avg "<<" "<<s1<<endl;//+s2<<" "<<s1<<" "<<s2<<endl;
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==s1+s1 && a[i]!=-1 && a[j]!=-1 && i!=j)
                {c++;a[i]=-1;a[j]=-1;break;}
        }

    cout<<c<<endl;
    }
}
