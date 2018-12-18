#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll dp[200010];
map <ll,ll> m;

int main()
{
    int n,mm;
    cin >> n >> mm;

    int x,y;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x > mm)
            dp[i] = 1;
        else if(x < mm)
            dp[i] = -1;
        else
            dp[i] = 0, y = i;
    }

    for(int i=1;i<n;i++)
        dp[i] += dp[i-1];

    for(int i=0;i<y;i++)
        m[dp[i]]++;

    m[0]++;

    ll ans = 0;

    for(int i=y;i<n;i++)
        ans += m[dp[i]]+m[dp[i]-1];

    cout << ans << endl;
}