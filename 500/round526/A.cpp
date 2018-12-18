#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[100010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    int ans = 1e9;

    for(int i=1;i<=n;i++)
    {
        int cnt = 0;

        for(int j=1;j<=n;j++)
        {
            int temp = a[j]*(abs(i-j) + abs(j-1) + abs(i-1) + abs(1-i) + abs(1-j) + abs(j-i));
            cnt += temp;
        }

        ans = min(ans,cnt);
    }

    cout << ans << endl;
}