#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,c=1,i;
       cin>>n;
       while(n>3)
       {
            n=n/4;
            c=c*2;
       }
       cout<<c<<endl;
    }
}

