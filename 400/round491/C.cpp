#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define first fi
#define second se
#define all(x) x.begin(),x.end()

using namespace std;

ll solve(ll n, ll k)
{
    ll temp,sum = 0;
    //cout << n << " " << k << endl;

    while(n)
    {
        n -= min(n,k);
        temp = n/10;
        n -= temp;
        sum += temp;
    }

    //cout << sum << endl;

    return sum;
}

int main()
{
    ll n;
    cin >> n;

    ll l = 1;
    ll h = n;

    ll mid,temp;

    while(l < h)
    {
        mid = (l+h)/2;

        temp = n - solve(n,mid);
        //cout << temp << endl;

        if(temp >= (n+1)/2)
            h = mid;
        else
            l = mid+1;
    }

    cout << l << endl;
}