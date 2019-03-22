#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[5010],b[5010],c[5010];

int32_t main()
{
    int n,q;
    cin >> n >> q;

    vector <pair<int,int> > v;

    for(int i=0;i<q;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back({x,y});
        a[x]++;
        a[y+1]--;
    }

    sort(v.begin(),v.end());

    for(int i=1;i<=n;i++)
        a[i] += a[i-1];

    int cnt = 0;

    for(int i=1;i<=n;i++)
    {
        if(a[i] > 0)
            cnt++;

        if(a[i] == 1)
            b[i]++;
        else if(a[i] == 2)
            c[i]++;
    }

    for(int i=1;i<=n;i++)
        b[i] += b[i-1], c[i] += c[i-1];

    int ans = 0;

    for(int i=0;i<q;i++)
    {
        for(int j=i+1;j<q;j++)
        {
            int temp = cnt;

            if(v[i].second >= v[j].second)
            {
                temp -= (b[v[j].first-1] - b[v[i].first-1] + b[v[i].second] - b[v[j].second]);
                temp -= (c[v[j].second] - c[v[j].first-1]);
                ans = max(ans,temp);
            }
            else if(v[i].second < v[j].first)
            {
                temp -= (b[v[i].second] - b[v[i].first-1] + b[v[j].second] - b[v[j].first-1]);
                ans = max(ans,temp);
            }
            else
            {
                temp -= (b[v[j].first-1] - b[v[i].first-1] + b[v[j].second] - b[v[i].second]);
                temp -= (c[v[i].second] - c[v[j].first-1]);
                ans = max(ans,temp);
            }
        }
    }

    cout << ans << endl;
}