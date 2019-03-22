#include <bits/stdc++.h>

#define int long long

using namespace std;

int n,m;
int a[300010];
vector <int> v[300010];
bool vis[300010];
int par[300010];
int sz[300010][3];

void dfs(int x)
{
    vis[x] = true;
    sz[x][a[x]]++;

    for(int i:v[x])
    {
        if(!vis[i])
        {
            dfs(i);

            for(int j=0;j<3;j++)
                sz[x][j] += sz[i][j];

            par[i] = x;
        }
    }
}

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    vector <pair<int,int> > vp;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);

        vp.push_back({x,y});
    }

    par[1] = -1;
    dfs(1);

    int cnt = 0;

    // for(int i=1;i<=n;i++)
    //     cout << sz[i][0] << " " << sz[i][1] << " " << sz[i][2] << endl;

    // for(int i=1;i<=n;i++)
    //     cout << par[i] << " ";
    // cout << endl;

    for(auto i:vp)
    {
        auto temp = i;
        if(par[temp.first] != temp.second)
            swap(temp.first,temp.second);
        
        int aa[3];

        for(int j=0;j<3;j++)
            aa[j] = sz[1][j] - sz[temp.first][j];

        if((aa[1] > 0 && aa[2] > 0) || (sz[temp.first][1] > 0 && sz[temp.first][2] > 0))
            ;
        else
            cnt++;
    }

    cout << cnt << endl;
}