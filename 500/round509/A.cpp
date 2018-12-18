#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[100010];

int32_t main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int ans = a[n-1] - a[0] - 1;
    n -= 2;
    ans -= n;

    cout << ans << endl;

    return 0;
}
