#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> m;
    int N = 0;
    cin >> N;
    while(N--)
    {
        int q = 0;
        cin>>q;
        string x;
        if (q == 1)
        {
            int y = 0;
            cin>>x;
            cin>>y;
            m[x] += y;
        }
        else if (q == 2)
        {
            cin>>x;
            m.erase(x);
        }
        else
        {
            cin>>x;
            map<string,int>::iterator itr=m.find(x);
            if (itr != m.end())
            {
                cout<<m[x]<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
