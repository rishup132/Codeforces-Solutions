#include <bits/stdc++.h>

using namespace std;

int a[100010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int ans = 0;

    for(int i=0;i<n;i+=2)
        ans += a[i+1] - a[i];

    cout << ans << endl;
}