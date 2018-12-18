#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <ll> p;

void Divisors(ll n, ll m)
{
    vector <ll> v,s;

    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }

    for (ll i=1; i<=sqrt(m); i++)
    {
        if (m%i == 0)
        {
            if (m/i == i)
                s.push_back(i);
            else
            {
                s.push_back(i);
                s.push_back(m/i);
            }
        }
    }

    set <ll> s1;

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<s.size();j++)
            s1.insert(v[i]*s[j]);
    }

    set <ll> :: iterator it;

    for(it = s1.begin();it != s1.end();it++)
        p.push_back(*it);

    sort(p.begin(),p.end());
}

int main()
{
    ll l,r,x,y;
    cin >> l >> r >> x >> y;

    Divisors(x,y);

    ll st = upper_bound(p.begin(),p.end(),l-1) - p.begin();
    ll ed = upper_bound(p.begin(),p.end(),r) - p.begin();

    ll count = 0;

    for(ll i=st;i<ed;i++)
    {
        ll temp = (x*y)/p[i];

        if((temp >=l && temp <= r) && (__gcd(temp,p[i]) == x))
            count++;
    }

    cout << count << endl;

    return 0;
}