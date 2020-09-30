#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{//cout<<1500000000-750000000;
    long long int t,n,k,th,p,c,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n==2)
            {
            //    cout<<2*k-1<<endl;
              //  continue;
            }
        th=(k+floor(k/n)) - floor( (k+floor(k/n)) / n );
        //if( (k+floor(k/n)+97-th)%n == 0)
          //  cout<<k+floor(k/n)+97-th+1<<endl;

        c=0;
        for(i=th;i<=k;i++)//jhamela
            if(i%n==0)
                c++;
            else
                i--;
        p=(k+floor(k/n)+k-th+c);

            cout<<p<<" th:"<<th<<" k:"<<k<<endl;
        //cout<<k+floor(k/n)+k-th;

    }
}
