#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(n==1)
    {
        cout<<1<<endl;
        return ;
    }
    sort(arr,arr+n);

    vector<int> count;
    int c=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            count.push_back(c);
            c=1;
        }
        else
            c++;
    }
    if(c!=0)
        count.push_back(c);
    int csize=count.size() - 1;
    sort(count.begin(),count.end(),greater<>() );

    for(int i=csize; i>=0; i--)
    {
        if(count[i] <= k )
        {
            k = k - count[i];
            count.pop_back();
        }
        else
            break;
    }
    if(count.size()==0)
    {
        cout<<1<<endl;
        return ;
    }
    cout<<count.size()<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
