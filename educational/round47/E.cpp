#include <bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;  
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,x;
    cin >> n;

    ll ans = 0;

    for(ll i=1;i<n;i++)
    {
        cin >> x;
        ans = (ans + ((x*(n+2-i))%mod*power(2,n-i-1,mod))%mod)%mod;
    }

    cin >> x;
    ans += x;

    cout << ans%mod << endl;

    return 0;
}