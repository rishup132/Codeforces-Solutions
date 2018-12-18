#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector <pair<int,int> > v[110];

    for(int i=1;i<=n;i++)
    {
        v[i].push_back({i,i});
    }

    int t = n;

    for(int i=0;i<m;i++)
    {
        n++;

        int x,y;
        cin >> x >> y;

        v[x].push_back({n,x});
        v[y].push_back({n,y});
    }

    for(int i=1;i<=t;i++)
    {
        cout << v[i].size() << "\n";

        for(auto i:v[i])
            cout << i.first << " " << i.second << endl;
    }

    return 0;
}