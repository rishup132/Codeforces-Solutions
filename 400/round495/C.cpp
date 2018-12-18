#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];
map <int,int> m;
set <int> s;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    s.insert(a[n-1]);

    int ans = 0;

    for(int i=n-2;i>=0;i--)
    {
        ans -= m[a[i]];
        m[a[i]] = s.size();
        ans += m[a[i]];
        s.insert(a[i]);
    }

    cout << ans << endl;
}