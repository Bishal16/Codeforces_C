//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	long long int t,i,n,p,q,r,j,k,c;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		c=0;
//		p=0;q=0;r=0;
//		for (i=2;i<n;i++)
//		{
//			if (c==1)
//				break;
//			else if (n%i==0)
//				for (j=2;j<n/i;j++)
//				{
//					if (i==j)
//						continue;
//					if (c==1)
//						break;
//					if (n%j*i==0)
//					{
//						r=int(n/(i*j));
//						if (i!=j && r!=j && i!=r)
//							if (i*j*r==n)
//							{
//								p=i;
//								q=j;
//								r=int(n/(i*j));
//								c=1;
//								break;
//							}
//					}
//				}
//		}
//		if (c==0)
//			cout<<"NO"<<endl;
//		else
//		{
//			cout<<"YES"<<endl;
//			cout<<p<<" "<<q<<" "<<r<<endl;
//		}
//	}
//}




#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		set<int> used;

		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !used.count(i)) {
				used.insert(i);
				n /= i;
				break;
			}
		}

		//
		for (auto it : used) cout << it << " ";
			cout << endl;
		//
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !used.count(i)) {
				used.insert(i);
				n /= i;
				break;
			}
		}
		/*
		for (auto it : used) cout << it << " ";
			cout << endl;

		*/
		if (int(used.size()) < 2 || used.count(n) || n == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			used.insert(n);
			for (auto it : used) cout << it << " ";
			cout << endl;
		}
	}

	return 0;
}
