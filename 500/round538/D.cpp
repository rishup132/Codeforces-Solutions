#include <bits/stdc++.h>

using namespace std;

int dp[5010][5010];
vector <int> v1,v2;

int main()
{
    int n;
    cin >> n;

    v1.push_back(0);

    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;

        if(x != v1.back())
            v1.push_back(x);
    }

    v2 = v1;
    reverse(v2.begin()+1,v2.end());
    n = v2.size()-1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(v1[i] == v2[j])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    cout << n - (dp[n][n]+1)/2 << endl;
}