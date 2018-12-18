#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[200010];

main()
{
    int n,m;
    cin >> n >> m;
    int curr = m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        int ans = x/m;
        x %= m;

        if(x >= curr)
        {
            ans++;
            curr = m - x + curr;
        }
        else
        {
            curr -= x;
        }

        cout << ans << " ";
    }
}
