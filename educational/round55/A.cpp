#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x,y,d;
        cin >> n >> x >> y >> d;

        int t1,t2,t3;
        t1 = t2 = t3 = 1e9;

        if(abs(y-1)%d == 0)
            t1 = abs(2-d-x)/d + abs(y-1)/d;

        if(abs(y-n)%d == 0)
            t2 = abs(d-x+n-1)/d + abs(y-n)/d;

        if(abs(y-x)%d == 0)
            t3 = abs(y-x)/d;

        int ans = min(t1,min(t2,t3));

        if(ans == 1e9)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}