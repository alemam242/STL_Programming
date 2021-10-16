#include<bits/stdc++.h>
using namespace std;

void rev(int a[],int n)
{
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    reverse(v.begin(),v.end());
    
    for(auto it: v)
    {
        cout << it << " ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rev(a,n);
    return 0;
}
