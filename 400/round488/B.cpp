#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

pair <ll,ll> p[200010];
ll a[200010];
map <ll,ll> m;
priority_queue <ll, vector <ll>,  greater <ll> > pp;

int main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        p[i].first = a[i];
    }

    for(int i=0;i<n;i++)
        cin >> p[i].second;

    if(k == 0)
    {
        for(int i=0;i<n;i++)
            cout << p[i].second << " ";
        cout << endl;

        return 0;
    }

    sort(p,p+n);

    ll ans = 0;

    for(int i=0;i<n;i++)
    {
        if(pp.size() == k)
        {
            m[p[i].first] = p[i].second + ans;

            if(pp.top() < p[i].second)
            {
                ans -= pp.top();
                pp.pop();
                ans += p[i].second;
                pp.push(p[i].second);
            }
        }
        else
        {
            ans += p[i].second;
            pp.push(p[i].second);
            m[p[i].first] = ans;
        }
    }

    for(int i=0;i<n;i++)
        cout << m[a[i]] << " ";
    cout << endl;
}