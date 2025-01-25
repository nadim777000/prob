#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,c=0,p=0;
       cin>>n>>m;
       for(int i=0;i<n;i++)
       {
           string s;
           cin>>s;
           for(int j=0;j<1;j++)
           {
                if(p==1)
            continue;
            int len=s.length();
           if(m<len)
            p=1;
           else if(m==len)
           {
               c++;
               p=1;
           }
           else
           {
               m=m-len;
               c++;
           }
           }
       }
        cout<<c<<endl;
        //for(i=0;i<n;i++)

    }
    return 0;
}


