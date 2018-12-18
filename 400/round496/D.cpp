#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int dp[200010];

int main()
{
    string s;
    cin >> s;

    int x,ans = 0;

    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')%3 == 0)
            dp[i+1] = max(dp[i+1],dp[i]+1);

        if(i > 0 && (s[i] + s[i-1] - '0' - '0')%3 == 0)
            dp[i+1] = max(dp[i+1],dp[i-1]+1);

        if(i > 1 && (s[i] + s[i-1] + s[i-2] - '0' - '0' - '0')%3 == 0)
            dp[i+1] = max(dp[i+1],dp[i-2]+1);

        dp[i+1] = max(dp[i+1],dp[i]);
    }

    cout << dp[s.size()] << endl;
}