#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll a[100010],b[100010];

int main()
{
    int n,m;
    cin >> n >> m;

    b[0] = a[0] = 0;
    b[1] = a[1] = 0;
    n += 2;
    b[n] = a[n] = m;

    for(int i=2;i<n;i++)
        cin >> b[i];

    for(int i=n;i>0;i--)
        b[i] -= b[i-1];

    for(int i=0;i<=n;i++)
        a[i] = b[i];

    for(int i=2;i<=n;i++)
        a[i] += a[i-2];

    ll sum;

    if(n%2 == 0)
        sum = a[n-1];
    else
        sum = a[n];

    ll ans = m - sum;
    ll temp;

    for(int i=2;i<=n;i++)
    {
        if(b[i] == 1)
            continue;

        temp = b[i]-1;

        if(i%2 == 0)
        {
            temp += a[i-2];
            temp += (sum - a[i-1]);
        }
        else
        {
            temp += a[i-1];
            temp += (sum - a[i]);
        }

        if(temp > ans)
            ans = temp;
    }

    cout << ans << endl;

}