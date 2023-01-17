#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int correct[n],wrong[m];
    for(int i=0;i<n;i++)
    {
        cin>>correct[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>wrong[j];
    }
    int size_correct=sizeof(correct)/sizeof(correct[0]);
    int size_wrong=sizeof(wrong)/sizeof(wrong[0]);
    sort(correct,correct+size_correct);
    sort(wrong,wrong+size_wrong);
    int min_correct=correct[0];
    int max_correct=correct[size_correct-1];
    int min_wrong=wrong[0];
    if(2*min_correct<=max_correct)
    {
        if(max_correct<min_wrong)
        {
            cout<<max_correct;
        }
        else{cout<<"-1";}
    }
    else if(2*min_correct<min_wrong)
    {
        cout<<2*min_correct;
    }
    else{
        cout<<"-1";
    }
    return 0;
}