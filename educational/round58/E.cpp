#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int cnt1,cnt2;
    cnt1 = cnt2 = -1;

    for(int i=0;i<n;i++)
    {
        char t;
        cin >> t;

        if(t == '+')
        {
            int x,y;
            cin >> x >> y;

            if(x > y)
                swap(x,y);

            cnt1 = max(x,cnt1);
            cnt2 = max(y,cnt2);
        }
        else
        {
            int x,y;
            cin >> x >> y;

            if(x > y)
                swap(x,y);

            if(x >= cnt1 && y >= cnt2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}