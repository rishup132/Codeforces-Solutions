#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll int a[3010],b[3010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];
    
    for(int i=0;i<n;i++)
        cin >> b[i];

    ll int ans = 1e18;

    for(int i=1;i<n-1;i++)
    {
        ll int l,r;
        l = r = 1e18;

        for(int j=0;j<i;j++)
        {
            if(a[j] < a[i])
                l = min(l,b[j]);
        }

        for(int j=i+1;j<n;j++)
        {
            if(a[j] > a[i])
                r = min(r,b[j]);
        }

        if(l == 1e18 || r == 1e18)
            continue;
        else
            ans = min(ans,b[i]+l+r);
    }

    if(ans == 1e18)
        cout << -1 << endl;
    else
        cout << ans << endl;
}