#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,ans;
        cin>>n;
        int a[n];
        int b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        ans=a[n-1];
         for (int i = 0; i < n - 1; ++i)
      ans += max(0, a[i] - b[i + 1]);
      cout << ans << '\n';
    }
}
