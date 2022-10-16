#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int count=0;
    for(int j=0;j<4;j++)
    {
        if(arr[j]==arr[j+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}