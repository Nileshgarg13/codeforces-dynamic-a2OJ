#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ahead,behind;
    cin>>ahead>>behind;
    if((n-ahead)>behind)
    {
        cout<<(behind+1);
    }
    else
    {
        cout<<(n-ahead);
    }

    return 0;
}