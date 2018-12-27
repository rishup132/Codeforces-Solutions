#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];

main()
{
    int n,m,h;
    cin >> n >> m >> h;

    int t1,t2;
    t1 = 0;

    for(int i=1;i<=m;i++)
    {
        cin >> a[i];
        t1 += a[i];
    }

    if(t1 < n)
    {
        cout << -1 << endl;
        return 0;
    }

    t1 -= a[h];
    t2 = a[h]-1;
    t2 += t1;

    double ans = 1;

    while(--n)
    {
        double temp = t1*1.0/t2;
        ans *= temp;
        t1--;
        t2--;
    }

    cout << setprecision(15) << 1-ans << endl;
}