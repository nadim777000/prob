#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,z=0,nz=0,b=0,c=0,d=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
                z++;
            else
                nz++;
        }
        if(n==z)
            cout<<0<<endl;
        else
        {
             for(i=0; i<n; i++)
             {
                 if(b==1 && c==1 && a[i]!=0)
                 {
                     d=1;
                     break;
                 }
                 else if(b==1 && c==0 && a[i]==0)
                    c=1;
                 else if(a[i]!=0)
                 b=1;

             }
             if(d==0)
                cout<<1<<endl;

             else
                cout<<2<<endl;
        }
    }
}


