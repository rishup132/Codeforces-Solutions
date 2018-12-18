#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll int a[100010];
ll int mi = -1000000000;
ll int ma = 1000000000;

int main()
{
    ll int n,w;
    cin >> n >> w;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    sort(a,a+n);

    ll int ans;

    if(a[n-1] > w || a[0] < -w)
    {
        cout << 0 << endl;
        return 0;
    }

    if(a[n-1] > 0)
        ans = w-a[n-1]+1;
    else
        ans = w+1;

    if(a[0] < 0)
        ans += a[0];

    if(ans > 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
}