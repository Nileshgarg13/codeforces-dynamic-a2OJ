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
    int count=0;
    for(int j=0;j<s.size();j++)
    {
        if(m[s[j]]==1)
        {
            count++;
            //cout<< s[j] <<endl;
        }
        else if(m[s[j]]>1)
        {
            count++;
            m[s[j]]=0;
        }

    }
    //cout<< count << " " << s.size();
    // cout<<s.size()<<endl;
    // cout<<count<<endl;
    if(count%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
//    zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
// z
// c
// i
// n
// t
// u
// f
// x
// o
// l
// d
// k
// a
// v
// m
// h
// s
// j
// e
// p
// y
// l
// u
// q
// w
// b
// z
// r