#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int x,y;
    cin >> x >> y;

    int x1,y1;
    cin >> x1 >> y1;

    int x2,y2;
    cin >> x2 >> y2;

    int ans = x;

    for(int i=y;i>=0;i--)
    {
        ans += i;

        if(y1 == i)
            ans = max(0ll,ans-x1);

        if(y2 == i)
            ans = max(0ll,ans-x2);
    }

    cout << ans << endl;
}