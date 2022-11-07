#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==0)
        {
            int count0=0;
            for(int j=i;j<7;j++)
            {
                if(s[i]==0)
                {
                    count0++;
                }
            }
            if(count0==7)
            {
                cout<<"YES";
            }
        }
        else if(s[i]==1)
        {
            int count1=0;
            for(int j=i;j<7;j++)
            {
                if(s[i]==1)
                {
                    count1++;
                }
            }
            if(count1==7)
            {
                cout<<"YES";
            }
        }
    }
    cout<<"KKK";
    return 0;
}