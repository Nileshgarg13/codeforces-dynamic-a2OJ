#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int x=0;x<n;x++)
    {int countr=0;
        for(int y=0;y<3;y++)
        {
            if(arr[x][y]==1)
            {
                countr++;
            }
        }
        if(countr>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}