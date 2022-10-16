#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    string s;
    cin>>s;
    int x=s.size();
    if(x<=10)
    {
        cout<<s<<"\n";
    }
    else{
        int y;
        y=x-2;
        cout<<s[0]<<y<<s[x-1]<<"\n";
    }}
    return 0;
}