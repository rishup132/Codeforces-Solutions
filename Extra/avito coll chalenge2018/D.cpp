#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int> > v[100010];
int dis[100010];
bool vis[100010];
int a[100010];

int32_t main()
{
    int n,m,k;
    cin >> n >> m >> k;

    for(int i=0;i<k;i++)
        cin >> a[i];

    for(int i=0;i<m;i++)
    {
        int x,y,d;
        cin >> x >> y >> d;

        v[x].push_back({y,d});
        v[y].push_back({x,d});
    }

    for(int &i:dis)
        i = 2e9;

    dis[a[0]] = 0;

    set <pair<int,int> > q;
    q.insert({0,a[0]});

    while(!q.empty())
    {
        auto temp = *q.begin();
        q.erase(q.begin());

        if(vis[temp.second])
            continue;

        vis[temp.second] = true;

        for(auto i:v[temp.second])
        {
            if(dis[i.first] > max(dis[temp.second],i.second))
            {
                q.erase({dis[i.first],i.first});
                dis[i.first] = max(dis[temp.second],i.second);
                q.insert({dis[i.first],i.first});
            }
        }
    }

    int ans = 0;

    for(int i=1;i<k;i++)
        ans = max(ans,dis[a[i]]);

    for(int i=0;i<k;i++)
        cout << ans << " ";
}