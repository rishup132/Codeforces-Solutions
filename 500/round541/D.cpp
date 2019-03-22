#include <bits/stdc++.h>

// #define int long long

using namespace std;

int sz[200010];
int p[200010];
vector <int> v[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<=n;i++)
        sz[i] = 1, p[i] = i, v[i].push_back(i);

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        if(sz[p[x]] < sz[p[y]])
            swap(x,y);

        int t = p[y];
        int t1 = p[x];

        for(int j:v[t])
            v[t1].push_back(j), p[j] = t1;

        sz[t1] += sz[t];
    }

    for(int i=1;i<=n;i++)
    {
        if(v[i].size() == n)
        {
            for(int j:v[i])
                cout << j << " ";
        
            return 0;
        }
    }

    return 0;
}