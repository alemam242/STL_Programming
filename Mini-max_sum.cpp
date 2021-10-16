#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long int a[5];
  for (int i = 0; i < 5; i++)
    {
      cin >> a[i];
    }
  int j = 0;
  vector < long long int >sum;
  vector < long long int >::iterator it;
  while (j<5)
    {
        long long int x=0;
      for (int i = 0; i < 5; i++)
      {
      if (i==j)
        {
          x += 0;
        }
      else
        {
          x += a[i];
        }
      }
      sum.push_back(x);
      j++;
    }

  sort (sum.begin (), sum.end ());
  cout << sum.front () << " " << sum.back () << endl;
  return 0;
}
