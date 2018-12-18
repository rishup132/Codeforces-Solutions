#include <bits/stdc++.h>

#define int unsigned long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k,l;
    cin >> n >> m >> k >> l;

    int ans = (l+m-1)/m;

    if(ans*m > n)
        cout << -1 << endl;
    else
    {
        n -= ans*m;
        
        if(n >= k)
            cout << ans << endl;
        else
        {
            k -= n;
            int t1 = (m - l%m)%m;

            if(k > t1)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}