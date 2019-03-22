#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010],b[200010],c[200010];

int32_t main()
{
    int n;
    cin >> n;

    int ev,od;
    ev = od = 0;

    for(int i=2;i<=n+1;i++)
        cin >> a[i];

    for(int i=2;i<=n+1;i++)
        c[i] = a[i] + c[i-2];

    for(int i=n+1;i>=2;i--)
        b[i] = a[i] + b[i+2];

    int cnt = 0;

    for(int i=2;i<=n+1;i++)
    {
        int x = c[i-1] + b[i+2];
        int y = c[i-2] + b[i+1];

        if(x == y)
            cnt++;
    }

    cout << cnt << endl;
}