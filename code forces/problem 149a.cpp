#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int months[12];
    for(int i=0;i<12;i++)
    {
        cin>>months[i];
    }
    int size = sizeof(months)/sizeof(months[0]);
    sort(months,months+size);
    int total=0;
    int count=0;
    for(int j=11;j>=0;j--)
    {
        if(total<n)
        {
            total=total+months[j];
            count++;
        }
    }
    if(total<n)
    {
        cout<<"-1";
    }
    else{cout<<count;}
    return 0;
}