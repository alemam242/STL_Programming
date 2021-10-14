#include<bits/stdc++.h>
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>*/
using namespace std;


int main() {
    vector <int> v;
    vector <int>::iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    return 0;
}
