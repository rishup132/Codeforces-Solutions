#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <ll,ll> m;

int main()
{
    int n,k;
    cin >> n >> k;

    ll x;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        m[x]++;
    }

    while(k--)
    {
        cin >> x;

        ll count = 0;

        map <ll,ll> :: iterator temp = m.end();

        while(true)
        {
            map <ll,ll> :: iterator it;

            for(it = m.begin();it != temp;it++)
            {
                if(x < it->first)
                    break;
            }

            if(x == 0 || it == m.begin())
                break;

            it--;
            temp = it;

            ll l = 1;
            ll h = it->second;

            while(l<h)
            {
                ll mid = (l+h)/2;

                if(x <= mid*it->first)
                    h = mid;
                else
                    l = mid+1;
            }

            while(x < l*it->first)
                l--;

            count += l;
            x -= l*it->first;
        }

        if(x == 0)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
}