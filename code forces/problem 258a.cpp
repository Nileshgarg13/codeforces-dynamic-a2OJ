#include <bits/stdc++.h>
using namespace std;


int main()
{
    string n;
    cin>>n;
    vector<char> x;
    int size=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<n.size();i++)
    {
        x.push_back(n[i]);
    }
    for (int i=0;i<n.size();i++)
    {
        if(x[i]=='0')
        {
            x.erase(x.begin()+i);
            break;
        }
    }
    for(int j=0;j<n.size()-1;j++)
    {
        cout<<x[j];
    }
}