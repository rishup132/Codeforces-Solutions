#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        int ans = (n%2)*a;
        n /= 2;

        if(2*a > b)
            ans += n*b;
        else
            ans += 2*n*a;

        cout << ans << endl;
    }
}