#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
        {
            ans+=arr[i];
        }
    }
    cout<<abs(ans);
    return 0;
}