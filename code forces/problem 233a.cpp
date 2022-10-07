#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int arr[n];
    if(n==1)
    {
        cout<<"-1";
    }
    else if(n%2==1)
    {
        cout<<"-1";
    }
    else
    {
        for(int i=0;i<n;i+=2)
        {
            if(i==n-1)
            {
                arr[i]=n;
            }
            else{
            arr[i]=i+2;}
        }
        for(int j=1;j<=n;j+=2)
        {
            arr[j]=j;
        }
    
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    }
    return 0;
}
//  5   
//2 1 4 3 5
//  7
// 2 1 4 3 6 5 7
// 