#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int x,y,k;
        cin >> x >> y >> k;

        int t1 = min(x,y);
        int t2 = abs(x-y);

        if(t1+t2 > k)
            cout << -1 << endl;
        else if(t2 == 0)
        {
            if((k-t1)%2 == 0)
                cout << k << endl;
            else
                cout << k-2 << endl;
        }
        else
        {
            if(t2%2 == 0)
            {
                if((k-t1-t2)%2 == 0)
                    cout << k << endl;
                else
                    cout << k-2 << endl;
            }
            else
                cout << k-1 << endl;
        }
    }
}