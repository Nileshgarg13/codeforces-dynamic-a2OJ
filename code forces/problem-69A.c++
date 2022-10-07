#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int finalx=0,finaly=0,finalz=0;
    for(int i=0;i<t;i++)
    {
        int x,y,z;     
        cin>>x>>y>>z;
        finalx+=x;
        finaly+=y;
        finalz+=z;
    }
    if(finalx==0 && finaly==0 && finalz==0)
    {
        cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;

}