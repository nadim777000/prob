#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,ans=0;
        cin>>n>>m;
        int a[n][2];
        for(i=0;i<n;i++)
        {
            for(j=0;j<2;j++)
            cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
             if(i==0)
                    continue;
            for(j=0;j<2;j++)
            {
              ans+=a[i][j];
            }
        }
        ans += 2*m;
        cout<<ans*2<<endl;
    }
}
