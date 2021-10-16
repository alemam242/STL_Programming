#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0,N=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            N++;
        }
        else {
        z++;
        }
    }
    cout << (double)p/n << endl;
    cout << (double)N/n << endl;
    cout << (double)z/n << endl;
    
    return 0;
}
