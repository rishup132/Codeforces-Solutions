#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll power(ll x, ll y, ll p)
{
    int res = 1;
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
    ll x,k;
    cin >> x >> k;

    if(x == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    x = (2*x-1)%mod;
    k = power(2,k,mod);

    x = (x%mod * k%mod)%mod;
    x++;

    cout << x%mod << endl;

    return 0;
}