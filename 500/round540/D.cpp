#include <bits/stdc++.h>

#define int long long

using namespace std;

int n,m;
int a[200010];

bool solve(int k)
{
    int b[k][n/k+10];

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n/k+10;j++)
            b[i][j] = 0;
    }

    int c1 = 0;
    int c2 = 0;

    for(int i=0;i<n;i++)
    {
        b[c1++][c2] = a[i];

        if(c1 == k)
            c1 = 0, c2++;
    }

    int ans = 0;

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n/k+10;j++)
            ans += max(0LL,b[i][j]-j);
    }

    return ans >= m;
}

int32_t main()
{
    cin >> n >> m;

    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], sum += a[i];

    sort(a,a+n,greater<int> ());

    if(sum < m)
    {
        cout << -1 << endl;
        return 0;
    }

    int l = 1;
    int h = n;
    int ans = n;

    while(l <= h)
    {
        int mid = (l+h)/2;

        if(solve(mid))
            h = mid - 1, ans = mid;
        else
            l = mid + 1;
    }

    cout << ans << endl;
}