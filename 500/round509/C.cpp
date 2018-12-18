#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010],b[200010];
map <int,int> mm;
set <int> s;

int32_t main()
{
    int n,m,d;
    cin >> n >> m >> d;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mm[a[i]] = i;
    }

    for(int i=0;i<n;i++)
        s.insert(a[i]);

    int k = 1;

    while(!s.empty())
    {
        auto j = s.begin();
        //cout << *j << endl;

        while(!s.empty() && j != s.end())
        {
            b[mm[*j]] = k;
            auto l = j;
            j = s.lower_bound(*j+d+1);
            s.erase(l);
        }

        k++;
    }

    cout << k-1 << endl;

    for(int i=0;i<n;i++)
        cout << b[i] << " ";
    cout << endl;
}
