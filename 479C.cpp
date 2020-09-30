#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s=0;
    cin>>n;
    long long int a[n],b[n],a1[n];
    vector<pair<long long int,long long int> > vect;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        vect.push_back( make_pair(a[i],b[i]) );
    }


    sort(vect.begin(),vect.end());
    for(i=0;i<n;i++)
    {
        if(vect[i].second<s)
            s=vect[i].first;
        else
            s=vect[i].second;
    }
cout<<s<<endl;
}
