#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    return ((n)*(n+1))/2;
}
int main()
{
    int n,m,x;
    cin>>n>>m;
    x=n;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int min=0,max=0;
    for(int j=0;j<m;j++)
    {
        
        if(x>=arr[j])
        {
        min+=factorial(arr[j]);
        if(x==0){
            break;
        }
        }
        else
        {
            min=min+(factorial(arr[j])-factorial((arr[j]-abs(x))));
            break;
        }    x=x-arr[j]; 
        
    }
    while(n>0)
    {
        max+=arr[m-1];
        arr[m-1]--;
        for(int k=m-1;k>0;k--)
        {
            if(arr[k]<arr[k-1])
            {
                swap(arr[k],arr[k-1]);
            }else{
                break;            }
        }
        n--;
    }
    cout<<max<<" "<<min;
    return 0;

}