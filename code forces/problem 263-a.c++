#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int finalrow,finalcolumn;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]==1)
            {
                finalrow=i+1;
                finalcolumn=j+1;
            }
        }
    }
    int ans=abs(3-finalrow)+abs(3-finalcolumn);
    cout<<ans;
    return 0; 
    
}