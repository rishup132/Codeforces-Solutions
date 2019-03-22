#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n,m;
    cin >> n >> m;

    if(m%n == 0)
    {
        m /= n;

        int cnt = 0;

        while(m%2 == 0)
            m /= 2, cnt++;
        
        while(m%3 == 0)
            m /= 3, cnt++;

        if(m == 1)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << -1 << endl;
}