#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[200010];

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    a[n] = INT_MAX;

    int ans = 1;

    int l = 0;
    
    for(int i=1;i<=n;i++)
    {
        if(a[i] >= 2*a[i-1])
        {
            ans = max(ans,(i-l));
            l = i;
        }
    }

    cout << ans << endl;
}