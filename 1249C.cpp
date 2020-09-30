#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,t,n,s=0,s1,k=0,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;c=0;k=0;s1=999999999999;p=0;
        for(i=0; ;i++)
        {
            if(pow(3,i)==n)
                {cout<<n<<endl;c=1;break;}
            if(pow(3,i)>n)
                {p=i;break;}
        }
s=0;
        for(i=p-1;i>=0;i--){
            s=s+pow(3,i);
            if(s>n && k==0)
                {s1=s;k++;}
                //cout<<" "<<s<<endl;
        }
        if(c==0)
        {
            s=0;
            for(i=p-1;i>=0;i--)
            {
                s=s+pow(3,i);//cout<<s<<endl;
                if(s==n)
                    {cout<<n<<endl;c=1;break;}
                else if(s>n)
                    s=s-pow(3,i);
            }
            if(c==0)
                if(pow(3,p)>=s1)
                    cout<<s1<<endl;
                else
                    cout<<pow(3,p)<<endl;
        }
    }
}
