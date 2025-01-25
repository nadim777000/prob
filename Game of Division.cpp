#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,ct,flag=0,difference;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            ct = 0;
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                difference = a[i] - a[j] ;
                if(difference%k==0)
                    break;
                else
                    ct++;
            }
                if(ct==n-1)
                {
                    flag =1 ;
                    cout<<"YES"<<endl<<i+1<<endl;
                    break;
                }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
}
