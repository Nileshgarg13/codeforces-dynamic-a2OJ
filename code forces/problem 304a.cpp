

#include <bits/stdc++.h>
using namespace std;
#define sf                  scanf
#define pf                  printf
#define eof                 while (cin >> n)
#define vi                  vector <int>
#define vs                  vector <string>
#define pb                  push_back
#define in                  insert




bool isSquareNumber (int n)
{
    int r = sqrt(n);

    if (r*r == n)
        return true;

    return false;
}
int main()
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,j,k;

    while (sf ("%d",&n) != EOF)
    {
        set <vi> st;

        for (i=1; i<=n; i++)
        {
            for (j=1; j<=i-1; j++)
            {
                k = (i*i)-(j*j);

                if (isSquareNumber(k))
                {
                    vi v;
                    v.pb(i);
                    v.pb(j);
                    v.pb(sqrt(k));
                    sort(v.begin(),v.end());
                    st.in(v);
                    v.clear();
                }
            }
        }

        pf ("%d\n",int(st.size()));

        st.clear();
    }
    return 0;
}