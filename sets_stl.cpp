#include<bits/stdc++.h>
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>*/
using namespace std;

int main() {
    set<int> s;
    set<int>::iterator it;
    int q;
    cin>>q;
    while(q--)
    {
        int n,x;
        cin >> n;
        cin >> x;
        if (n==1)
        {
            s.insert(x);
        }
        else if (n==2)
        {
            s.erase(x);
        }
        else
        {
            it=s.find(x);
            if (it==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }  
    return 0;
}
