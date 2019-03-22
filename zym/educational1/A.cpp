#include <bits/stdc++.h>

using namespace std;

int dp[32][32][55];

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                for(int l=0;l<=k;l++)
                {
                    if(i == 0 || j == 0 || k == 0)
                        dp[i][j][l] = 1e9;

                    if(l == 1)
                        dp[i][j][l] = 0;
                }
            }
        }

        for(int l=2;l<=k;l++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    dp[i][j][l] = 1e9;

                    for(int a=1;a<i;a++)
                    {
                        for(int b=1;b<l;b++)
                            dp[i][j][l] = min(dp[i][j][l],dp[a][j][b]+dp[i-a][j][l-b]+j*j);
                    }

                    for(int a=1;a<j;a++)
                    {
                        for(int b=1;b<l;b++)
                            dp[i][j][l] = min(dp[i][j][l],dp[i][a][b]+dp[i][j-a][l-b]+i*i);
                    }
                }
            }
        }

        cout << dp[n][m][k] << endl;
    }
}