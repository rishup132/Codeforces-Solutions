#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll a[200010];
map <ll,ll> m;

int main()
{
    int n,mm;
    cin >> n >> mm;

    for(int i=0;i<n;i++)
        cin >> a[i];

    ll y,c1,c2,ans;
    y = c1 = c2 = ans = 0;
    m[0]++;

    for(int i=0;i<n;i++)
    {
        if(a[i] < mm)
            ans -= m[--y];
        else
            ans += m[y++];
        c1 += ans;
        m[y]++;
    }

    ans = y = 0;
    m.clear();
    m[0]++;

    for(int i=0;i<n;i++)
    {
        if(a[i] <= mm)
            ans -= m[--y];
        else
            ans += m[y++];
        c2 += ans;
        m[y]++;
    }

    cout << c1-c2 << endl;
}