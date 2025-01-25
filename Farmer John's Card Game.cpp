#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a[2005];
    int n,m,i;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            int x;
            cin>>x;
            a[x]=i;
        }

    for(int i=0;i<n*m;i++)
    {
        if(a[i]!=a[i+n] && i+n<n*m)
        {
            cout<<-1<<endl;
            return ;
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<(i<n-1?" " : "\n");
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
