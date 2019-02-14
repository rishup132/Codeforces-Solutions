#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans;
    int t = sqrt(n);
    int cnt = n-t*t;

    if(cnt == 0)
        ans = 2*t;
    else if(cnt <=t)
        ans = 2*t+1;
    else
        ans = 2*t+2;

    for(int i=1;i*i<=n;i++)
    {
        if(n%i == 0)
            ans = min(ans,i+n/i);
    }

    cout << ans << endl;
}