#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int count=0;
    getline(cin,s1);
    getline(cin,s2);
    // cout<<s1<<endl;
    unordered_map<char,int>headline;
    unordered_map<char,int>line;
    for(int i=0;i<s1.length();i++)
    { if (headline.find(s1[i]) == headline.end())
    {
            headline.insert(make_pair(s1[i], 1));
    }
        else
    {
        headline[s1[i]]++;
    }
    }
    // for (auto& it : headline) {cout << it.first << ' ' << it.second << '\n';}

    for(int j=0;j<s2.length();j++)
    { if (line.find(s2[j]) == line.end())
    {
            line.insert(make_pair(s2[j], 1));
    }
        else
    {
        line[s2[j]]++;
    }
    }
        // for (auto& it : line) {cout << it.first << ' ' << it.second << '\n';}

    for(int k=0;k<s2.length();k++)
    {
        if(s2[k]!=' ')
        {
        if(line[s2[k]]<=headline[s2[k]])
        {
            count++;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    else{continue;}
    }
    if(count==(s2.length()-line[' ']))
    {
        cout<<"YES";
    }
    // cout<<count;
    return 0;
}

//Your dog is upstears