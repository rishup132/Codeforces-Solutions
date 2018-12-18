#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    if(__gcd(n,k) == n)
        cout << k/n << endl;
    else
        cout << k/n + 1 << endl;
}