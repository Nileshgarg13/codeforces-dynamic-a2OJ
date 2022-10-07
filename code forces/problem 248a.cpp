#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    int lcount1=0;
    int lcount0=0;
    int rcount0=0;
    int rcount1=0;
    for(int k=0;k<n;k++)
    {
        if(arr[k][0]==1)
        {
            lcount1++;
        }
        else{
            lcount0++;
        }
    }
    for(int l=0;l<n;l++)
    {
        if(arr[l][1]==1)
        {
            rcount1++;
        }
        else{
            rcount0++;
        }
    }
    int ans=0;
    if(lcount0>=lcount1)
    {
        ans=(n-lcount0);
    }
    else{
        ans= (n-lcount1);
    }
    if(rcount0>=rcount1)
    {
        ans=ans+(n-rcount0);
    }
    else 
    {
        ans=ans+(n-rcount1);
    }
    cout<<ans;

    return 0;
}