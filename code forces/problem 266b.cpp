#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    string q;
    
    cin>>q;
    
    for(int k=0;k<t;k++)
    {
    for(int j=0;j<n;j++)
    {
        if(q[j]=='B' && q[j+1] =='G')
        {
            q[j]='G';
            q[j+1]='B';
            j++;
        }
    }
    }
    for(int x=0;x<n;x++)
    {
        cout<<q[x];
    }

    return 0;
}