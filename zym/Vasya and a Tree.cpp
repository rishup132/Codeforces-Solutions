#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int vis[300010];
vector <int> v[300010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    
}