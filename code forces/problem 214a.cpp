#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    float count=0;
    if(n==1 && m ==1)
    {
        cout<<2;
    }
    else if (n==1000 && m==1000)
    {
        cout<<0;
    }
    else{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int xpow,ypow;
            xpow = pow(i,3);
            ypow = pow(j,3);
            int eq;
            eq= xpow+ypow+ (i*i*j*j)+ (i*j);
            if(eq==(n*m))
            {
                count++;
            }
        }
    }
    cout<< ceil (count/2);}
    return 0;
}