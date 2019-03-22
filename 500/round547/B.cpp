#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[400010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i], a[i+n] = a[i];

    a[2*n] = 0;

    int cnt = 0;
    int ans = 0;

    for(int i=0;i<=2*n;i++)
    {
        if(a[i] == 1)
            cnt++;
        else
            ans = max(ans,cnt), cnt = 0;
    }

    cout << ans << endl;
}