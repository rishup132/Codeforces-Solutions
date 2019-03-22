#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int dp[505][505];
string s;

int solve(int l, int r)
{
    if(dp[l][r] == 1e9)
    {
        if(l > r)
            return 1e9;

        if(l == r)
            return 1;

        dp[l][r] = 1 + solve(l+1,r);

        for(int i=l+1;i<=r;i++)
        {
            if(s[i] == s[l])
                dp[l][r] = min(dp[l][r],solve(l+1,i-1)+solve(i,r));
        }
    }

    return dp[l][r];
}

int32_t main()
{
    int n;
    cin >> n;

    string s1;
    cin >> s1;

    for(int i=0;i<505;i++)
    {
        for(int j=0;j<505;j++)
            dp[i][j] = 1e9;
    }

    s += s1[0];

    for(char i:s1)
    {
        if(i != s.back())
            s += i;
    }

    cout << solve(0,s.size()-1) << endl;
}