#include <bits/stdc++.h>

#define ll long long

using namespace std;

pair <int,pair<ll,ll> > p[100010];
int cnt[100010];
ll ans = 2250000000000;

ll solve(ll x, ll y)
{
    return x*x + y*y;
}

int main()
{
    int n;
    cin >> n;

    ll a,b;

    for(int i=0;i<n;i++)
    {
        cin >> p[i].second.first >> p[i].second.second;
        p[i].first = i;
    }

    while(1)
    {
        random_shuffle(p,p+n);
        a = b = 0;

        for(int i=0;i<n;i++)
        {
            if(solve(a+p[i].second.first,b+p[i].second.second) < solve(a-p[i].second.first,b-p[i].second.first))
            {
                cnt[p[i].first] = 1;
                a += p[i].second.first;
                b += p[i].second.second;
            }
            else
            {
                cnt[p[i].first] = -1;
                a -= p[i].second.first;
                b -= p[i].second.second;
            }
        }

        if(solve(a,b) <= ans)
        {
            for(int i=0;i<n;i++)
                cout << cnt[i] << " ";
            return 0;
        }
    }

    return 0;
}