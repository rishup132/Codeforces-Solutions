#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans = 0;

    for(int i=2;i<=n;i++)
    {
        int t = n/i;

        ans += 2*t*(t+1) - 4;
    }

    cout << ans << endl;

    return 0;
}