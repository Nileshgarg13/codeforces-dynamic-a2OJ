#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
bool Check(int n)
{
    int i;
    bool flag;
    flag=true;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==false)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n,m;
    int i,j;
    bool flag;
    scanf("%d %d",&n,&m);
    for(i=n+1;i<=m;i++)
    {
        flag=Check(i);
        if(flag==true)
        {
            break;
        }
    }
    if(i==m&&flag==true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}