#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int val1;
    int val2;
    for(int i=0;i<s1.size();i++)
    {
        val1=int(s1[i]);
        val2=int(s2[i]);
        
        if(val1>val2)
        {
            cout<<"1";
            break;
        }
        else if(i==s1.size()-1 && val1==val2)
        {
            cout<<"0";
            break;
        }
        else if(val1 < val2)
        {
            cout<<"-1";
            break;
        }

    }
    return 0;
}