#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[500010];
map <int,int> m[2];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    m[1][a[1]] = 1;
    m[0][0] = 1;
    int x = a[1];
    int ans = 0;

    for(int i=2;i<=n;i++)
    {
        x ^= a[i];
        ans += m[i%2][x]++;
    }

    cout << ans << endl;
}