#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

#define int long long

using namespace std;
using namespace __gnu_pbds;

typedef tree <
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update 
> sset;

int a[200010];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    sset,insert({0,0});

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        ans += (sset.size() - sset.order_of_key({a[i]-t,1e9});
        sset({a[i],i+1});
    }

    cout << ans << endl;
}