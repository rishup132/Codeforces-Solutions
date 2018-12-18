#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans = 0;

    while(n)
    {
        ans++;
        n = n >> 1;
    }

    cout << ans << endl;
}