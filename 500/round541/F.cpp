#include <bits/stdc++.h>

#define int long long

using namespace std;

int sz[200010];
int par[200010];
vector <int> v[200010];

int root(int x)
{
    while(par[x] != x)
        x = par[par[x]];

    return x;
}

void dfs(int x)
{
    cout << x << " ";

    for(int i:v[x])
        dfs(i);
}

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<=n;i++)
        sz[i] = 1, par[i] = i;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        x = root(x);
        y = root(y);

        if(sz[x] < sz[y])
            swap(x,y);

        
        par[y] = x;

        sz[x] += sz[y];
        sz[y] = sz[x];
    }

    int st = root(1);

    for(int i=1;i<=n;i++)
    {
        if(i != st)
            v[par[i]].push_back(i);
    }

    dfs(st);
}