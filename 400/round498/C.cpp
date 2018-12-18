#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

ll a[200010],b[200010];

int main()
{
    ll n;
    cin >> n;

    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    for(ll i=1;i<n;i++)
        a[i] += a[i-1];

    for(ll i=n-2;i>=0;i--)
        b[i] += b[i+1];

    reverse(b,b+n);

    ll ans = 0;

    for(ll i=0;i<n;i++)
    {
        if(binary_search(b,b+n,a[i]))
        {
            ll temp = lower_bound(b,b+n,a[i]) - b;
            temp = n-1-temp;

            if(temp > i && ans < a[i])
                ans = a[i];
        }
    }

    cout << ans << endl;
    return 0;
}