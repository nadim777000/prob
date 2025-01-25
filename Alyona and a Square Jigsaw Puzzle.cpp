#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0,sum=0,j=8;
        cin>>n;
         int a[n] ;
        for(i=0;i<n;i++)
            cin>>a[i];
        int a2[50];
        int odd=1;
        for(i=0;i<50;i++)
        {
            a2[i]=odd*odd;
            odd = odd+2 ;
        }


         for(i=0;i<n;i++)
        {
            sum=sum+a[i];
           for(j=0;j<50;j++)
           {
               if(sum==a2[j])
               {
                   c++;
                   break;
               }
           }
        }
        cout<<c<<endl;
    }
    return 0;
}


