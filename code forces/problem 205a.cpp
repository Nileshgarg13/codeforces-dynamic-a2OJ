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
    int min = INT_MAX;
    int index = -1;
    // Iterate the array
    for(int i=0; i < n; i++)
    {
        if(arr[i] < min)
        {
            //If current value is less than min value
            // then replace it with min value
            min = arr[i];
            index = i;
        }
    }
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    if(arr[0]==arr[1])
    {
        cout<<"Still Rozdil";
    }
    else{cout<<index+1;}

    return 0;
}