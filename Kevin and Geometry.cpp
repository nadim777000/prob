#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        map<int,int>mp;
        vector<int>dup;
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]==2)
                dup.push_back(a[i]);
        }
        if(dup.empty())
        {
            cout<<-1<<endl;
            continue;
        }
        if(dup.size()>1)
        {
            cout<<dup[0]<<" "<<dup[0]<<" "<<dup[1]<<" "<<dup[1]<<endl;
            continue;
        }
        int x=dup[0];
        vector<int>not_dup;
        int y=2;
        for(i=0;i<n;i++)
        {
            if(a[i]==x && y>0)
            {
                y--;
                continue;
            }
            not_dup.push_back(a[i]);
        }
        int f=0;
        for(i=0;i<not_dup.size()-1;i++)
        {
            if(2*x>abs(not_dup[i]-not_dup[i+1]))
            {
                cout<<x<<" "<<x<<" "<<not_dup[i]<<" "<<not_dup[i+1]<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
    }
}
