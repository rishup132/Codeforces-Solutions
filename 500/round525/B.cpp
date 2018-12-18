#include <bits/stdc++.h>

#define int long long

using namespace std;

set <int> s;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int x;

    for(int i=0;i<n;i++)
        cin >> x, s.insert(x);

    int cnt = 0;

    for(auto i:s)
    {
        cout << i-cnt << "\n";
        cnt = i;
        k--;

        if(k == 0)
            break;
    }

    while(k--)
        cout << "0\n";
}