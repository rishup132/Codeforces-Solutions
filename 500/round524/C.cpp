#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int x3,y3,x4,y4;
        cin >> x3 >> y3 >> x4 >> y4;

        int x5,y5,x6,y6;
        x5 = max(x1, x3), y5 = max(y1, y3), x6 = min(x2, x4), y6 = min(y2, y4);

        int ans1,ans2;
        ans1 = ans2 = 0;

        if(n*m%2)
            ans1 = n*m/2 + 1, ans2 = n*m/2;
        else
            ans1 = ans2 = n*m/2;

        //cout << ans1 << " " << ans2 << endl;

        n = (x2-x1+1);
        m = (y2-y1+1);

        ans1 += n*m/2, ans2 -= n*m/2;

        if((x1+y1)%2 && n*m%2)
            ans1++, ans2--;

        //cout << ans1 << " " << ans2 << endl;

        n = (x4-x3+1);
        m = (y4-y3+1);

        ans1 -= n*m/2, ans2 += n*m/2;

        if((x3+y3)%2 == 0 && n*m%2)
            ans1--, ans2++;

        //cout << ans1 << " " << ans2 << endl;

        if(x6 < x5 || y6 < y5)
        {
            cout << ans1 << " " << ans2 << endl;
            continue;
        }

        n = (x6-x5+1);
        m = (y6-y5+1);

        //cout << n << " " << m << endl;

        ans1 -= n*m/2, ans2 += n*m/2;

        if((x5+y5)%2 && n*m%2)
            ans1--, ans2++;

        cout << ans1 << " " << ans2 << endl;
    }
}