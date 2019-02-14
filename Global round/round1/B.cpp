#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;
    
    for(int i=0;i<n;i++)
        cin >> a[i];

    int ans = a[n-1] - a[0] + 1;

    vector <int> v;

    for(int i=1;i<n;i++)
        v.push_back(a[i]-a[i-1]-1);

    sort(v.begin(),v.end());

    while(--k && !v.empty())
        ans -= v.back(), v.pop_back();

    cout << ans << endl;
}