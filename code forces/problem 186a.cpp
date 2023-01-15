#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char s1[100005],s2[100005];
   scanf("%s%s",s1,s2);
	int flag=0;
	int a[100005];
	int temp=0;
	for(int t=0;t<strlen(s1);t++)
	{
		
		if(strlen(s1)!=strlen(s2))
		{
			flag=3;
		}
	    if(s1[t]!=s2[t])
		{
	       a[temp]=t;
	       temp++;
		flag++;
		if(flag==3)
		break;
	    }
	    else
	    continue;
	}	
	if(flag==2)
	{
		if(s1[a[0]]==s2[a[1]]&&s1[a[1]]==s2[a[0]])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	else
	{
		printf("NO\n");
	}
	
	return 0;
} 