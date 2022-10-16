#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map <char,int> m;
    for(int i=0;s[i];i++)
    {
        //m[s[i]]++;
        if(m.find(s[i])==m.end())
        {
            m.insert(make_pair(s[i],1));
        }
        else{
            m[s[i]]++;
        }
    }
    string s2;
    cin>>s2;
    for(int i=0;s2[i];i++)
    {
        //m[s[i]]++;
        if(m.find(s2[i])==m.end())
        {
            m.insert(make_pair(s2[i],1));
        }
        else{
            m[s2[i]]++;
        }
    }
    string s3;
    cin>>s3;
    unordered_map <char,int> m2;
    for(int i=0;s3[i];i++)
    {
        //m[s[i]]++;
        if(m2.find(s3[i])==m2.end())
        {
            m2.insert(make_pair(s3[i],1));
        }
        else{
            m2[s3[i]]++;
        }
    }
    if(m==m2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}