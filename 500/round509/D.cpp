#include <bits/stdc++.h>

#define int long long

using namespace std;

vector <pair<int,int> > v;

int32_t main()
{
    int n,h;
    cin >> n >> h;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back({x,y});
    }

    int i = 0;
    int j = 0;
    int ans = v[j].second - v[j].first + h;
    int curr = 0;

    while(j < n-1)
    {
        j++;
        curr += (v[j].first - v[j-1].second);

        while(curr >= h)
        {
            i++;
            curr -= (v[i].first - v[i-1].second);
        }

        ans = max(ans,(v[j].second - v[i].first + h - curr));
    }

    cout << ans << endl;

    return 0;
}
