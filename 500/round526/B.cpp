#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[100010];

int32_t main()
{
    int n,s;
    cin >> n >> s;

    int sum = 0;
    int mi = 1e9;

    for(int i=0;i<n;i++)
        cin >> a[i], sum += a[i], mi = min(mi,a[i]);

    if(sum < s)
    {
        cout << -1 << endl;
        return 0;
    }

    int l = 0;
    int h = mi;
    int ans = 0;

    while(l <= h)
    {
        int mid = (l+h)/2;

        int count = 0;

        for(int i=0;i<n;i++)
        {
            if(a[i] > mid)
                count += (a[i] - mid);
        }

        if(count >= s)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }

    cout << ans << endl;
}