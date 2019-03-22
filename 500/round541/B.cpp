#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans = 0;

    int x,y;
    x = y = 0;

    while(n--)
    {
        int x1,y1;
        cin >> x1 >> y1;

        int mx = max(x,y);
        int mi;

        if(x1 > y1)
            mi = min(x1-1,y1);
        else
            mi = min(x1,y1-1);

        // cout << mx << " " << mi << endl;

        if(mx <= mi)
            ans += (mi-mx) + 1;
        
        x = x1;
        y = y1;

        // cout << ans << endl;
    }

    if(x == y)
        ans++;

    cout << ans << endl;
}