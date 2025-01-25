#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,c=0,sum=0;
        cin>>n>>k;
        int a[n] ;
        for(i=0;i<n;i++)
            cin>>a[i];
        int len=sizeof(a)/sizeof(a[0]);
        std::sort(a,a+len);

        for(i=n-1;i>=0;i--)
        {
            sum=sum+a[i];
            //cout<<sum;
            if(sum==k)
            {
                cout<<0<<endl;
                c=1;
                break;
            }
            else if(sum>k)
            {
                sum=sum-a[i];
                cout<<k-sum<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        cout<<k-sum<<endl;

        //for(i=0;i<n;i++)

    }
    return 0;
}

