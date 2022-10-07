#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector <int> line;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        line.push_back(a);
    }
    int maxelement= max_element(line.begin(),line.end())-line.begin();
    int minelement=min_element(line.begin(),line.end())-line.begin();
    cout<<maxelement<<" "<<minelement;
 return 0;
}