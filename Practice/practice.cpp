#include <bits/stdc++.h>

#define int long long
using namespace std;

int a[100];
pair <int,int> dp[100][2];
int n;

void solve(int x, int cnt)
{
    if(dp[x][cnt].first != -1)
        return;

    solve(x+1,cnt);
    solve(x+1,cnt^1);

    if(cnt == 1)
    {
        if(dp[x+1][cnt].second > dp[x+1][cnt^1].second + a[x])
        {
            dp[x][cnt].second = dp[x+1][cnt].second;
            dp[x][cnt].first = dp[x+1][cnt].first + a[x];
        }
        else
        {
            dp[x][cnt].second = dp[x+1][cnt^1].second + a[x];
            dp[x][cnt].first = dp[x+1][cnt^1].first;
        }
    }
    else
    {
        if(dp[x+1][cnt].first > dp[x+1][cnt^1].first + a[x])
        {
            dp[x][cnt].first = dp[x+1][cnt].first;
            dp[x][cnt].second = dp[x+1][cnt].second + a[x];
        }
        else
        {
            dp[x][cnt].first = dp[x+1][cnt^1].first + a[x];
            dp[x][cnt].second = dp[x+1][cnt^1].second;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i=0;i<100;i++)
        dp[i][0] = dp[i][1] = {-1,-1};

    for(int i=0;i<n;i++)
        cin >> a[i];

    dp[n][0] = dp[n][1] = {0,0};

    solve(0,1);

    cout << dp[0][1].first << " " << dp[0][1].second << endl;
}