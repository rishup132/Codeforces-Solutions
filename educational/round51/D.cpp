#include <bits/stdc++.h>

#define int long long
#define mod 998244353

using namespace std;

int d[1010][2010][5];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int k=0;k<1010;k++)
    {
        for(int i=0;i<2010;i++)
        {
            for(int j=0;j<5;j++)
                d[k][i][j] = 0;
        }
    }

    d[1][1][0] = d[1][1][3] = 1;
    d[1][2][1] = d[1][2][2] = 1;
    d[1][1][4] = d[1][2][4] = 2;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j == 1)
            {
                d[i][j][0] = d[i][j][3] = 1;
                d[i][j][4] = 2;
            }
            else
            {
                d[i][j][0] = (d[i-1][j][0] + d[i-1][j][1] + d[i-1][j][2] + d[i-1][j-1][3])%mod;
                d[i][j][1] = (d[i-1][j-1][0] + d[i-1][j][1] + d[i-1][j-2][2] + d[i-1][j-1][3])%mod;
                d[i][j][2] = (d[i-1][j-1][0] + d[i-1][j-2][1] + d[i-1][j][2] + d[i-1][j-1][3])%mod;
                d[i][j][3] = (d[i-1][j-1][0] + d[i-1][j][1] + d[i-1][j][2] + d[i-1][j][3])%mod;
                d[i][j][4] = (d[i][j][0] + d[i][j][1] + d[i][j][2] + d[i][j][3])%mod;
            }
        }
    }

    cout << d[n][m][4]%mod << endl;
}