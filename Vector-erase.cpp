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
    int n,q=2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }  
    for(int i=0;i<q;i++)
    {
        if(i==0)
        {
            cin>>n;
            v.erase(v.begin()+n-1);
        }
        else {
        int x;
        cin>>n>>x;
        v.erase(v.begin()+n-1,v.begin()+x-1);
        }
    }
    cout << v.size() << endl;
    for(it=v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    return 0;
}
