#include <bits/stdc++.h>
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
    int currentpassengers=arr[0][1];
    vector <int> maxpass;
    for(int x=1;x<n;x++)
    {
        maxpass.insert(maxpass.begin(),currentpassengers);
        currentpassengers=(currentpassengers-arr[x][0])+arr[x][1];
    }
    cout<<*max_element(maxpass.begin(), maxpass.end());
    return 0;
}