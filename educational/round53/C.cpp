#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define endl "\n"
#define MAX 1000010

using namespace std;

int dp1[200010][2],dp2[200010][2];

int32_t main()
{
    //um.reserve(1<<15);
    //um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int x,y;
    cin >> x >> y;

    int move = abs(x) + abs(y);

    if(n < move || (n-move)%2)
    {
        cout << -1 << endl;
        return 0;
    }

    dp1[0][0] = dp1[0][1] = 0;
    int j = 1;

    for(char i:s)
    {
        dp1[j][0] = dp1[j-1][0];
        dp1[j][1] = dp1[j-1][1];

        if(i == 'R')
            dp1[j][0]++;
        else if(i == 'L')
            dp1[j][0]--;
        else if(i == 'U')
            dp1[j][1]++;
        else
            dp1[j][1]--;

        j++;
    }

    dp2[n][0] = dp2[n][1] = 0;
    j = n;
    reverse(s.begin(),s.end());

    for(char i:s)
    {
        j--;
        dp2[j][0] = dp2[j+1][0];
        dp2[j][1] = dp2[j+1][1];

        if(i == 'R')
            dp2[j][0]++;
        else if(i == 'L')
            dp2[j][0]--;
        else if(i == 'U')
            dp2[j][1]++;
        else
            dp2[j][1]--;
    }

    // for(int i=0;i<=n;i++)
    //     cout << dp2[i][0] << " " << dp2[i][1] << endl;

    int l = 0;
    int h = n;
    int ans = 0;

    while(l <= h)
    {
        int mid = (l+h)/2;

        bool flag = false;

        for(int i=1;i<=n-mid+1;i++)
        {
            int t1 = abs(dp1[i-1][0] + dp2[i+mid-1][0] - x);
            int t2 = abs(dp1[i-1][1] + dp2[i+mid-1][1] - y);

            if(t1+t2 <= mid && (mid-t1-t2)%2 == 0)
            {
                flag = true;
                break;
            }
        }

        //cout << flag << endl;

        if(flag)
        {
            h = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;

    return 0;
}