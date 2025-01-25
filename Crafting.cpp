#include<bits/stdc++.h>
using namespace std;
int a[5000005];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int sum=0;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			a[i]-=x;
		}
		sort(a+1,a+1+n);
		if(a[1]+a[2]<0)cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
