#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int x,y;
    cin >> x >> y;

    int t1 = abs(1-x) + abs(1-y);
    int t2 = abs(n-x) + abs(n-y);

    if(t1 <= t2)
        cout << "White\n";
    else
        cout << "Black\n";
}