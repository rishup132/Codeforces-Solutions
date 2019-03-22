#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    int mi = -1;

    for(int i=0;i<n;i++)
        cin >> a[i], mi = max(mi,a[i]);

    int ans = 1;
    int cnt = 0;

    a[n] = -1;

    for(int i=0;i<=n;i++)
    {
        if(a[i] == mi)
            cnt++;
        else
            ans = max(ans,cnt), cnt = 0;
    }

    cout << ans << endl;
}