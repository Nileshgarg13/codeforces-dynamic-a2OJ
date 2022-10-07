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
    int minperf=arr[0];
    int maxperf=arr[0];
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<minperf)
        {
            count++;
            minperf=arr[j];
        }
        else if(arr[j]>maxperf)
        {
            count++;
            maxperf=arr[j];
        }
    }
    cout<<count;
    return 0;
}