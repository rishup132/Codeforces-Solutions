#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define pi 3.141592653589793

using namespace std;

int dp[160010][70];

int32_t main()
{
    int t;
    cin >> t;

    for(int j=1;j<=t;j++)
    {
        int d;
        cin >> d;

        int x;
        cin >> x;
        
        cout << "Case " << j << ": ";

        int cnt = 0;
        int count = 0;

        while(cnt != x && d >= 0)
        {
            if(cnt > x)
                cnt -= pow(2,d);
            else
                cnt += pow(2,d);

            count++;
            d--;
        }

        if(cnt != x)
            cout << "NO" << endl;
        else
            cout << "YES " << count << endl;
    }
}