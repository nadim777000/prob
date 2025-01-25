#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 && a==b || a==1 && b-a==1)
            cout<<1<<endl;
        else if(a==b)
            cout<<0<<endl;
        else
            cout<<b-a<<endl;


    }
}


