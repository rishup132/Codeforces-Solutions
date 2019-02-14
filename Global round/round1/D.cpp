#include <bits/stdc++.h>

// #define int long long
// #define mod 1000000007

using namespace std;

int a[1000010];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        a[x]++;
    }

    int dp[2][3][3] = {0};

    for(int i=1;i<=m;i++)
    {
        memset(dp[i&1^1],0,36);

        for(int x=0;x<3;x++)
        {
            for(int y=0;y<3;y++)
            {
                for(int z=0;z<3;z++)
                {
                    if(a[i] >= x+y+z)
                        dp[i&1^1][y][z] = max(dp[i&1^1][y][z],dp[i&1][x][y]+z+(a[i]-x-y-z)/3);
                }
            }
        }
    }

    cout << dp[m&1^1][0][0] << endl;
}