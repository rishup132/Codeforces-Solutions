#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
int dp[100010][210];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=0;i<210;i++)
        dp[0][i] = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=200;j++)
        {
            
        }
    }

    return 0;
}