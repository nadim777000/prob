#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,e=0,o=0;
        cin>>n;
        int a[n] ;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                    e++;
                else
                    o++;
            }
            if(e>0)
                cout<<o+1<<endl;
                else
                    cout<<o-1<<endl;

    }
    return 0;
}
