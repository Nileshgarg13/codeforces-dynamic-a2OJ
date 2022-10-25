#include<bits/stdc++.h>
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
    int min=1000000;
    int minelement[2];
    for(int j=0;j<n;j++)
    {
        if(abs(arr[j]-arr[j+1])<min)
        {
            minelement[0]=j+1;
            minelement[1]=j+2;
            min=abs(arr[j]-arr[j+1]);
        }
    }
    if(abs(arr[n-1]-arr[0])<min)
        {
            minelement[0]=n;
            minelement[1]=1;
            min=abs(arr[n]-arr[0]);
        }

   
    for(int k=0;k<2;k++)
    {
        cout<<minelement[k]<<" ";
    }
    return 0;
}