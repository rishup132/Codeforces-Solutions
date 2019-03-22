#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,v;
    cin >> n >> v;

    n--;
    int ans = 0;

    if(n <= v)
        ans = n;
    else
    {
        n -= v;
        ans = v;
        v = 2;

        while(n--)
            ans += v, v++;
    }

    cout << ans << endl;
}