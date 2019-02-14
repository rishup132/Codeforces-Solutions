#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int k,x;
        cin >> k >> x;

        cout << x + (k-1)*9 << endl;
    }
}