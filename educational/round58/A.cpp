#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int l,r,d;
        cin >> l >> r >> d;

        if(d < l || d > r)
            cout << d << endl;
        else
            cout << d*((r+d)/d) << endl;
    }
}