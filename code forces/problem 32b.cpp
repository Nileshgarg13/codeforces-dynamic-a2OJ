#include <bits/stdc++.h>
using namespace std;
int main()
{
    string borze;
    cin>>borze;
    vector <int> ans;
    int n =borze.size();
    for(int i=0;i<n;i++)
    {
        if(borze[i]=='.')
        {
            ans.insert(ans.end(),0);

        }
        else if(borze[i]=='-' && borze[i+1]=='.')
        {
            ans.insert(ans.end(),1);
            i++;
        }
        else if(borze[i]=='-'&& borze[i+1]=='-')
        {
            ans.insert(ans.end(),2);
            i++;
        }
    }
     for (auto element : ans) {
        cout<< element;
    }
    return 0;
}