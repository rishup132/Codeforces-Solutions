#include <bits/stdc++.h>

#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)

using namespace std;

int dp[5010][5010],d[5010][5010];
int a[5010];
int m;

int solve1()
{
    for(int i=0;i<5010;i++)
    {
        for(int j=0;j<5010;j++)
            dp[i][j] = 0;
    }

    for(int i=1;i<=5000;i++)
    {
        dp[i][1] = 1;

        if(i == a[1])
            dp[i][1] = 0;
    }

    for(int i=2;i<=m;i++)
    {
        for(int j=1;j<=5000;j++)
            dp[j][i] = dp[j][i-1] + (a[i] == j ? 0 : 1);
    }

    int ans = 1e9;

    for(int i=1;i<=5000;i++)
    {
        if(dp[i][m] < ans)
            ans = dp[i][m];
    }

    return ans;
}

int solve2()
{
    for(int i=0;i<5010;i++)
    {
        for(int j=0;j<5010;j++)
            d[i][j] = 0;
    }

    fr(m) 
    for(int j = 1; j + i <= m; j++) 
    d[j][j + i] = (a[j] == a[j + i] ? d[j + 1][j + i - 1] + 1 : min(d[j][j + i - 1], d[j + 1][j + i]) + 1);

    return d[1][m] - 1;
}

int main()
{
    while(true)
    {
        int n = rand()%10+1;

        a[0] = -1;
        m = 0;

        for(int i=1;i<=n;i++)
        {
            int x = rand()%10+1;

            if(x != a[m])
                a[++m] = x;
        }

        int t1 = solve1();
        int t2 = solve2();

        if(t1 != t2)
        {
            cout << t1 << " " << t2 << endl;
            cout << m << endl;

            for(int i=1;i<=m;i++)
                cout << a[i] << " ";

            return 0;
        }
    }
}