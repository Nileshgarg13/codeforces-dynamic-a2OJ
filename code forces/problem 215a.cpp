#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int pedal[n];
    for(int i=0;i<n;i++)
    {
        cin>>pedal[i];
    }
    cin>>m;
    int rear[m];
    for(int j=0;j<m;j++)
    {
        cin>>rear[j];
    }
    int max = 0;
    int gear;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            if(rear[l]%pedal[k]==0)
            {
                gear=rear[l]/pedal[k];
                if(gear>=max)
                {
                    max = gear;
                }
            }
        }
    }
    int ans,count=0;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            if(rear[l]%pedal[k]==0)
            {
                ans=rear[l]/pedal[k];
                if(ans==max)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}