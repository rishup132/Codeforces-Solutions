#include <bits/stdc++.h>

//#define int long long
#define mod 1000000007

using namespace std;

vector <int> v[1000010];
unordered_map <int,int> m;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=1;i<=1e6;i++)
    {
        for(int j=i;j<=1e6;j+=i)
            v[j].push_back(i);
    }

    int n;
    cin >> n;

    int ans = 0,t;
    m[0]++;

    for(int i=1;i<=n;i++)
    {
        cin >> t;

        int st = upper_bound(v[t].begin(),v[t].end(),i) - v[t].begin();

        for(int j=st-1;j>=0;j--)
        {
            int t1 = v[t][j];
            m[t1] = (m[t1]%mod + m[t1-1]%mod)%mod;
            ans = (ans%mod + m[t1-1]%mod)%mod;
        }
    }

    cout << ans << endl;
}