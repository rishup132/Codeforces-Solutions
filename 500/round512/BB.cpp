#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

string s1[210],s2[210];
int dp[210][210];
int ans[100010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> s1[i];

    for(int i=0;i<200;i+=2)
    {
        for(int j=0;j<200;j+=2)
            s2[i] += "10";
        
        for(int j=0;j<200;j+=2)
            s2[i+1] += "01";
    }

    for(int i=0;i<210;i++)
    {
        for(int j=0;j<210;j++)
            dp[i][j] = 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            dp[i+1][j+1] = s1[i][j] == s2[i][j] ? 0 : 1;
    }

    for(int i=0;i<210;i++)
    {
        for(int j=1;j<210;j++)
            dp[i][j] += dp[i][j-1];
    }

    for(int j=0;j<210;j++)
    {
        for(int i=1;i<210;i++)
            dp[i][j] += dp[i-1][j];
    }

    for(int i=0;i<1e5;i++)
        ans[i] = -1;

    for(int i=1;i<=min(n,m);i++)
    {
        int t1 = 1e9;

        for(int j=0;j<=n-i;j++)
        {
            for(int k=0;k<=m-i;k++)
            {
                int temp = dp[i+j][i+k] - dp[j][i+k] - dp[i+j][k] + dp[j][k];
                t1 = min(t1,min(temp,i*i-temp));
            }
        }

        ans[t1] = i;
    }

    for(int i=1;i<1e5;i++)
    {
        if(ans[i] == -1)
            ans[i] = ans[i-1];
    }

    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin >> x;

        if(x >= n*m)
            cout << min(n,m) << endl;
        else
            cout << ans[x] << endl;
    }

    return 0;
}