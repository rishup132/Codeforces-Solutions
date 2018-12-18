#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

multiset <pair<int,int> > s;
vector <pair<int,int> > v;

int32_t main()
{
    int n,x,y;
    cin >> n >> x >> y;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;

        v.push_back({a,b});
    }

    sort(v.begin(),v.end());

    for(auto i:v)
    {
        auto t1 = s.lower_bound({i.first,0});

        if(s.empty() || t1 == s.begin())
            s.insert({i.second,i.first});
        else
        {
            t1--;

            if((i.first - t1->first)*y <= x)
            {
                auto t2 = *t1;
                t2.first = i.second;
                s.erase(t1);
                s.insert(t2);
            }
            else
                s.insert({i.second,i.first});
        }
    }

    int ans = 0;

    for(auto i:s)
        ans = ((ans%mod + x%mod)%mod + ((i.first-i.second)%mod * y%mod)%mod)%mod;

    cout << ans << endl;
}