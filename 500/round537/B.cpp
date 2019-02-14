#include <bits/stdc++.h>

#define int long long

using namespace std;

vector <int> v;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,m;
    cin >> n >> k >> m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(),v.end(),greater<int> ());

    double ans = 0;

    while(v.back() < v[0] && m)
        m--, v.pop_back();

    double cnt;

    if(m == 0)
    {
        for(int i:v)
            ans += i;
        
        cnt = v.size();
    }
    else
    {
        if(m < v.size())
            ans = v.size()*v[0] + m, cnt = v.size();
        else
            m -= (v.size()-1), ans = v[0] + min(m,k), cnt = 1;
    }

    ans /= cnt;

    cout << fixed << setprecision(15) << ans << endl;
}