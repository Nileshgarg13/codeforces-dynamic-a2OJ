#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink,salt,lemon;
    drink=(k*l)/(n*nl);
    lemon=(c*d)/n;
    salt=p/(n*np);
    int ans;
    ans=min(drink,salt);
    int finalans;
    finalans=min(ans,lemon);
    cout<<finalans;

    return 0;
}