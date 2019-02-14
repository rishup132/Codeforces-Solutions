#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <int> v[100010];
int vis[100010];
int s[100010];
int vis1[100010];

void dfs(int n)
{
    vis[n] = true;

    if(s[n] == -1)
    {
        int ans = 2e9;

        for(int i:v[n])
        {
            if(!vis[i])
                ans = min(ans,s[i]);
        }

        s[n] = ans;
    }

    for(int i:v[n])
    {
        if(!vis[i])
            dfs(i);
    }
}

void dfs1(int n, int x)
{
    vis1[n] = true;
    s[n] -= x;

    for(int i:v[n])
    {
        if(!vis1[i])
            dfs1(i,s[n]+x);
    }
}

int32_t main()
{
    int n;
    cin >> n;

    for(int i=2;i<=n;i++)
    {
        int x;
        cin >> x;

        v[x].push_back(i);
        v[i].push_back(x);
    }

    for(int i=1;i<=n;i++)
        cin >> s[i];

    for(int i=1;i<=n;i++)
    {
        if(v[i].size() == 1 && s[i] == -1)
            s[i] = s[v[i][0]];
    }

    // for(int i=1;i<=n;i++)
    //     cout << s[i] << " ";
    // cout << endl;

    dfs(1);

    // for(int i=1;i<=n;i++)
    //     cout << s[i] << " ";
    // cout << endl;

    dfs1(1,0);

    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(s[i] < 0)
        {
            cout << -1 << endl;
            return 0;
        }

        ans += s[i];
    }

    cout << ans << endl;
}