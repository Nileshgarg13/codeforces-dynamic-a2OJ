#include <cstdio>

int main()
{
    int n, a, sum(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        sum += a;
    }
    if(sum%n==0)
    {
        printf("%d",n);
    }
    else{printf("%d",n-1);}
    return 0;
}