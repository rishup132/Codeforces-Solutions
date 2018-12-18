#include <bits/stdc++.h>

using namespace std;

double dp[2010][2010];

double solve(int x, int y)
{
    if(x <= 0)
        return 0;

    if(y <= 0)
        return 1;

    if(y == 1)
        return (1.0*x)/(x+1);

    if(dp[1000+x][1000+y] == -1)
    {
        double t1,t2;

        t1 = (1.0*x)/(x+y);
        t2 = (1.0*y)/(x+y);
        y--;
        t2 *= (1.0*y)/(x+y);
        y--;

        
        dp[1000+x-1][1000+y] = solve(x-1,y);
        dp[1000+x][1000+y-1] = solve(x,y-1);

        double a = dp[1000+x-1][1000+y]*((1.0*x)/(x+y));
        double b = dp[1000+x][1000+y-1]*((1.0*y)/(x+y));

        t1 += t2*(a+b);

        dp[1000+x][1000+y] = t1;
    }

    return dp[1000+x][1000+y];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int w,n;
    cin >> w >> n;

    for(int i=0;i<2010;i++)
    {
        for(int j=0;j<2010;j++)
            dp[i][j] = -1;
    }

    cout << setprecision(10) << solve(w,n) << endl;
}