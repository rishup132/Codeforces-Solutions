#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

ll a[100][100];
ll co = 0;
ll nn,mm,kk;
map <int,int> dp[100][100];

void solve1(ll n,ll m,ll self)
{
    if(a[n][m] == -1)
        return;

    self ^= a[n][m];

    if(n+m == nn+1)
    {
        dp[n][m][self]++;
        return;
    }

    solve1(n+1,m,self);
    solve1(n,m+1,self);
}

void solve2(ll n, ll m, ll self)
{
    if(a[n][m] == -1)
        return;

    self ^= a[n][m];

    if(n+m == nn+1)
    {
        co += dp[n][m][kk^a[n][m]^self];
        return;
    }

    solve2(n-1,m,self);
    solve2(n,m-1,self);
}

int main()
{
    cin >> nn >> mm >> kk;

    for(ll i=1;i<=nn;i++)
    {
        for(ll j=1;j<=mm;j++)
            cin >> a[i][j];
    }

    for(ll i=0;i<=mm+1;i++)
        a[0][i] = a[nn+1][i] = -1;

    for(ll i=0;i<=nn+1;i++)
        a[i][0] = a[i][mm+1] = -1;

    solve1(1,1,0);
    solve2(nn,mm,0);

    cout << co << endl;
    
    return 0;
}