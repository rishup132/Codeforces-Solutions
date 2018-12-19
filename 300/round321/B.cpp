#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define endl "\n"
#define MAX 1000010

using namespace std;

int a[MAX], b[MAX];

int32_t main()
{
    //um.reserve(1<<15);
    //um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector <pair<int,int> > v;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back({x,y});
    }

    sort(v.begin(),v.end());

    int l = 0;
    int ans = 0;
    int output = 0;
    
    multiset <int> s;

    for(int i=0;i<n;i++)
    {
        s.insert(v[i].first);
        ans += v[i].second;

        while(*s.rbegin() - *s.begin() >= m)
        {
            s.erase(s.find(v[l].first));
            ans -= v[l].second;
            l++;
        }

        output = max(output,ans);
    }

    cout << output << endl;
    
    return 0;
}