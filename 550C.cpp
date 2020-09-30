#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,m,k,c=0;
    string a[125];
    for(i=1;i<1000;i++)
        if(i%8==0)
            {a[c]=to_string(i);c++;}

    string s;
    cin>>s;
    int l=s.length();
    if(l<=3)
    {
        int p=std::stoi(s);
        if(p%8==0)
           {cout<<"YES"<<endl<<p;return 0;}
    }
    if(s.find("0")<=100)
        {cout<<"YES"<<endl<<0;return 0;}
    else if( s.find("8")<=100)
        {cout<<"YES"<<endl<<8;return 0;}

    for(i=1;i<12;i++)
        for(j=0;j<l-1;j++)
            if(a[i][0]==s[j])
            {
                for(k=j+1;k<l;k++)
                    if(a[i][1]==s[k])
                    {
                        cout<<"YES"<<endl<<a[i];return 0;
                    }
            }

    for(i=0;i<112;i++)
        for(j=0;j<l-2;j++)
            if(a[i][0]==s[j])
            {
                for(k=j+1;k<l-1;k++)
                    if(a[i][1]==s[k])
                    {
                        for(m=k+1;m<l;m++)
                            if(a[i][2]==s[m])
                                {
                                    cout<<"YES"<<endl<<a[i];return 0;
                                }
                    }
            }
    cout<<"NO";
}
