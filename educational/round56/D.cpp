#include <bits/stdc++.h>

#define int long long
#define mod 998244353

using namespace std;

vector <int> v[300010];
int vis[300010];
int p[300010];
bool flag;
int even,odd;

void dfs(int n, int cnt)
{
    if(vis[n])
    {
        if(vis[n] != cnt)
            flag = true;
        
        return;
    }

    vis[n] = cnt;
    cnt == 1 ? odd++ : even++;

    for(int i:v[n])
        dfs(i,3^cnt);
}

int32_t main()
{
    int t;
    cin >> t;

    p[0] = 1;

    for(int i=1;i<200010;i++)
        p[i] = (p[i-1]%mod + p[i-1]%mod)%mod;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        for(int i=1;i<=n;i++)
            v[i].clear(), vis[i] = 0;

        for(int i=0;i<m;i++)
        {
            int x,y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        int ans = 1;

        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                flag = false;
                even = odd = 0;

                dfs(i,1);

                ans = (ans%mod * (p[even] + p[odd])%mod)%mod;

                if(flag)
                    ans = 0;
            }
        }

        cout << ans << endl;
    }
}