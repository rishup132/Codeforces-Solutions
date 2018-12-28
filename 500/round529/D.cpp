#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <pair<int,int> > v;
bool vis[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back({x,y});
    }

    for(auto &i:v)
    {
        if(v[i.first-1].first == i.second || v[i.first-1].second == i.second)
            continue;
        else
            swap(i.first,i.second);
    }

    int temp = v[0].second - 1;
    cout << 1 << " " << v[0].first << " " << v[0].second << " ";
    vis[1] = vis[v[0].first] = vis[v[0].second] = true;

    while(true)
    {
        if(vis[v[temp].first])
            break;
        else
            cout << v[temp].first << " ", vis[v[temp].first] = true;

        if(vis[v[temp].second])
            break;
        else
            cout << v[temp].second << " ", vis[v[temp].second] = true;
            
        temp = v[temp].second - 1;
    }
}