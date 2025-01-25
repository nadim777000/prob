#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a[4];
      int b,c,d;
      for(int i=0;i<4;i++)
        cin>>a[i];
      b=a[0]+a[1];
      c=a[2]-a[1];
      d=a[3]-a[2];
      if(b==c && c==d && d==b)
        cout<<3<<endl;
      else if(b==c && b!=d || b==d && b!=c || c==b && c!=d || c==d && c!=b || d==b && d!=c || d==c && d!=b)
        cout<<2<<endl;
        else
            cout<<1<<endl;

    }
}



