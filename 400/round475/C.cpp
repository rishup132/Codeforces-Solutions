#include <bits/stdc++.h>

#define ll long long
#define mod 1000000009

using namespace std;

ll int modInverse(ll int a,ll int m)
{
    ll int m0 = m;
    ll int y = 0, x = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        ll int q = a / m;
        ll int t = m;
 
        m = a % m, a = t;
        t = y;
 
        y = x - q * y;
        x = t;
    }

    if (x < 0)
       x += m0;
 
    return x;
}

ll int power(ll int x,ll int y)
{
    ll int res = 1;
    x = x % mod;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
 
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}

ll int c[100010],d[100010];

int main()
{
    ll int n,a,b,k;
    cin >> n >> a >> b >> k;

    c[k-1] = 1;

    for(int i=k-2;i>=0;i--)
        c[i] = (a%mod * c[i+1]%mod)%mod;

    d[0] = 1;

    for(int i=1;i<k;i++)
        d[i] = (b%mod * d[i-1]%mod)%mod;

    for(int i=0;i<k;i++)
        c[i] = (c[i]%mod * d[i]%mod)%mod;

    string s;
    cin >> s;

    ll int sum = 0;

    for(int i=0;i<k;i++)
    {
        if(s[i] == '+')
            sum = (sum + c[i])%mod;
        else
            sum = ((sum - c[i])%mod + mod)%mod;
    }

    n = (n+1)/k;

    b = (power(b,k)%mod * modInverse(power(a,k),mod)%mod)%mod;

    ll int temp1,temp2;

    temp1 = ((power(b,n)-1)%mod + mod)%mod;
    temp2 = ((b-1)%mod + mod)%mod;

    if(b != 1)
        temp1 = (temp1%mod * modInverse(temp2,mod)%mod + mod)%mod;
    else
        temp1 = n;

    sum = (sum%mod * temp1%mod)%mod;

    cout << sum << endl;
}