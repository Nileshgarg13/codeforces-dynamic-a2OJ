#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int j=0;j<n;j++)
    {
        count=count+arr[j];
    }
    int ans=0;
    for(int k=1;k<=5;k++)
    {
        
        count=count+k;
        if(n==1)
        {
            if(count%2==0)
            {
                ans++;
            }
            count=count-k;
        }
        else 
        {
            if(count%(n+1)!=1)
            {
            ans++;
            }
            count=count-k;
        }
    }
    cout<<ans;
    return 0;
}