#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[10000];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    int ans1 = a[n-1] + m;

    for(int i=n-1;i>=0;i--)
    {
        int temp = min(m,a[n-1]-a[i]);
        a[i] += temp;
        m -= temp;
    }

    if(m == 0)
    {
        cout << a[n-1] << " " << ans1 << endl;
        return 0;
    }

    cout << a[0] + (m+n-1)/n << " " << ans1 << endl;
}