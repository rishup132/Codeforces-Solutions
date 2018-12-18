#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    int t1,t2;
    t1 = x/__gcd(x,y);
    t2 = y/__gcd(x,y);

    t1 = a/t1;
    t2 = b/t2;

    cout << min(t1,t2) << endl;

    return 0;
}
