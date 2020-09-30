#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    long long n,i,j,p;
    string s;
    cin>>n;
    map<string,int>db;

    for(i=0;i<n;i++)
    {
        cin>>s;
        if(db.count(s)==0)
        {
            cout<<"OK"<<endl;
            db[s]=1;
        }
        else
        {
            cout<<s<<db[s]<<endl;
            db[s]=db[s]+1;
        }
    }
}
