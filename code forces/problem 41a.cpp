#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string x;
    cin>>x;
    reverse(s.begin(),s.end());
    if(s==x)
    {
        cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;
}