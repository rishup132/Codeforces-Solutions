#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <pair<int,pair<int,int> > > v[300010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,d;
    cin >> n >> m >> d;

    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin >> x >> y >> w;

        v[x].push_back({y,{w,i}});
        v[y].push_back({x,{w,i}});
    }

    set <pair<int,int> > q;
    q.insert({0,1});
    vector <int> dis(n+1,1e18);
    dis[1] = 0;
    vector <int> ans;
    vector <int> last(n+1,-1);
    int cnt = 0;

    while(!q.empty() && cnt < d)
    {
        auto temp = *q.begin();
        q.erase(q.begin());

        if(last[temp.second] != -1)
        {
            ans.push_back(last[temp.second]);
            cnt++;
        }

        for(auto i:v[temp.second])
        {
            if(dis[i.first] > dis[temp.second] + i.second.first)
            {
                q.erase({dis[i.first],i.first});
                dis[i.first] = dis[temp.second] + i.second.first;
                last[i.first] = i.second.second; 
                q.insert({dis[i.first],i.first});
            }
        }
    }

    cout << ans.size() << endl;
    for(int i:ans)
        cout << i+1 << " ";
}