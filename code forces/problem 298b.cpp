#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xdiff,ydiff;
    xdiff=x1-x2;
    ydiff=y1-y2;
    int countn,counte,countw,counts;
    for(int j=0;j<n;j++)
    {
        if(arr[j]=='N')
        {
            countn++;
        }
        else if(arr[j]=='S')
        {
            counts++;
        }
        else if(arr[j]=='E')
        {
            counte++;
        }
        else if(arr[j]=='W')
        {
            countw++;
        }
    }
    int ans=0;
    if(ydiff>=0)
    {
        if(countn>=ydiff)
        {
            ans++;
        }
    }
    else if(ydiff<0)
    {
        if(counts>=abs(ydiff))
        {
            ans++;
        }
    }
    else if(xdiff>=0)
    {
        if(counte>=xdiff)
        {
            ans++;
        }
    }
    else if(xdiff<0)
    {
        if(countw>=abs(xdiff))
        {
            ans++;
        }
    }
    
    return 0;
}