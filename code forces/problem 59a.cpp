#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ascii upper case 65-90    lower case 97-122
    string c;
    int uppercase=0,lowercase=0;
    cin>>c;
    for(int i=0;i<c.size();i++)
    {
        int x=c[i];
        if(65<=x && x<=90)
        {
            uppercase++;
        
        }
        else{lowercase++;}
    }
    if(uppercase>lowercase)
    {
        transform(c.begin(),c.end(),c.begin(),::toupper);
        cout<<c;
    }
    else{transform(c.begin(),c.end(),c.begin(),::tolower);
    cout<<c;}
    return 0;
}