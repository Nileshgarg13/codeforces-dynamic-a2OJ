#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int count;
    count=count+arr[0]-1;
    for(int j=0;j<m-1;j++)
    {
        if(arr[j]<arr[j+1])
        {
            count+=arr[j+1]-arr[j];
        }
        else if(arr[j]>arr[j+1])
        {
            count=count+(n-arr[j])+arr[j+1];
        }
        else{count+=0;}
    }
    cout<<count;
    return 0;
}