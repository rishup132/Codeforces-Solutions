#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[300010];
vector <int> v[300010];
bool vis[300010];

int dfs(int n)
{
    int ans = a[n];
    vis[n] = true;

    for(int i:v[n])
    {
        if(!vis[i])
            ans += dfs(i);
    }

    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0); 
    cout.tie(0);

    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        if(a[x] < 0 || a[y] < 0)
            continue;
        else
        {
            v[x].push_back(y);
            v[y].push_back(x);
        }
    }

    int ans,cnt;
    ans = -1e15;
    cnt = 0;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            int temp = dfs(i);

            if(temp > ans)
            {
                ans = temp;
                cnt = 1;
            }
            else if(temp == ans)
                cnt++;
        }
    }

    cout << ans*cnt << " " << cnt << "\n";

    return 0;
}