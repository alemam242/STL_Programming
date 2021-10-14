#include<bits/stdc++.h>
/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>*/
using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator it;
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }   
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        vector <int>::iterator low = lower_bound(v.begin(),v.end(),x);
        if(v[low-v.begin()]==x)
        {
            cout << "Yes " << (low-v.begin()+1) << endl;
        }
        else
        {
            cout << "No " << (low-v.begin()+1) << endl;
        }
    }
    return 0;
}
