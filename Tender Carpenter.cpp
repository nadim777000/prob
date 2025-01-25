#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,i,c=0;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
        cin>>a[i];
       for(i=1;i<n;i++)
       {
           if( a[i]<a[i-1]*2 && a[i-1]<a[i]*2 )
           {
             cout<<"YES"<<endl;
             c=1;
           break;
           }
       }
       if(c==0)
        cout<<"NO"<<endl;
    }
}

