#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans = 0;

    string s;
    cin >> s;

    for(int i=0;i<n;i++)
    {
        if((s[i] - '0')%2 == 0)
            ans += i+1;
    }

    cout << ans << endl;
}