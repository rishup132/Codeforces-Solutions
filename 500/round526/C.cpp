#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    s += "b";

    int count = 1;
    int ans = 1;

    for(auto i:s)
    {
        if(i == 'a')
            count++;
        else if(i == 'b')
        {
            ans = (ans%mod * count%mod)%mod;
            count = 1;
        }
    }

    ans = (ans - 1 + mod)%mod;

    cout << ans << endl;
}