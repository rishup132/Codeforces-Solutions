#include <bits/stdc++.h>

#define int long long
using namespace std;

vector <int> v[100010];
bool vis[100010];
int a[100010];
int m,ans;

void dfs(int n, int x, bool flag)
{
    vis[n] = true;

    if(a[n] == 1)
        x++;
    else
        x = 0;

    if(x > m)
        flag = false;

    if(v[n].size() == 1 && n != 1 && flag)
        ans++;

    for(int i:v[n])
    {
        if(!vis[i])
            dfs(i,x,flag);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
    {
        int y,z;
        cin >> y >> z;

        v[y].push_back(z);
        v[z].push_back(y);
    }

    dfs(1,0,true);

    cout << ans << endl;
}